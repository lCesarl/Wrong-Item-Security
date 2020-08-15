// PASTE AT BOTTOM OF FILE
#ifdef PUSH_ITEM_SECURITY
void CHARACTER::CheckWrongItems()
{
	// inventory
	for (int i = 0; i < INVENTORY_MAX_NUM; ++i)
	{
		LPITEM item;
		if (!(item = GetInventoryItem(i)))
			continue;

		for (int ia = 0; ia < ITEM_ATTRIBUTE_MAX_NUM; ia++)
		{
			const TPlayerItemAttribute& attr = item->GetAttribute(ia);
			const TItemAttrTable& r = g_map_itemAttr[attr.bType];

			if (item->GetAttributeSetIndex() != -1 && attr.sValue > r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1])
			{
				/* Debug */
				// ChatPacket(CHAT_TYPE_INFO, "Wrong item found : %s, pos = %d, value = %d, max_value = %d, Type=%d",
				//	item->GetName(), i, attr.sValue, r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1], attr.bType);

				LogManager::instance().WrongItemLog(GetPlayerID(), GetName(), item->GetName(), item->GetID(), attr.bType, attr.sValue, r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1]);

				// possibility
				//item->ChangeAttribute();
				//item->RemoveFromCharacter();
				break;
			}
		}
		continue;
	}

	// equiped items
	for (int i = 0; i < WEAR_MAX_NUM; i++)
	{
		LPITEM item = GetWear(i);
		if (!item)
			continue;

		for (int ia = 0; ia < ITEM_ATTRIBUTE_MAX_NUM; ia++)
		{
			const TPlayerItemAttribute& attr = item->GetAttribute(ia);
			const TItemAttrTable& r = g_map_itemAttr[attr.bType];

			if (item->GetAttributeSetIndex() != -1 && attr.sValue > r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1])
			{
				/* Debug */
				// ChatPacket(CHAT_TYPE_INFO, "EQUIPED Wrong item found : %s, wear = %d, value = %d, max_value = %d, Type=%d",
				//	item->GetName(), i, attr.sValue, r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1], attr.bType);

				LogManager::instance().WrongItemLog(GetPlayerID(), GetName(), item->GetName(), item->GetID(), attr.bType, attr.sValue, r.lValues[r.bMaxLevelBySet[item->GetAttributeSetIndex()] - 1]);

				// possibilityy 
				//item->ChangeAttribute();
				//item->RemoveFromCharacter();
				break;
			}
		}
		continue;
	}
}
#endif