// PASTE AT BOTTOM
#ifdef PUSH_ITEM_SECURITY
void LogManager::WrongItemLog(DWORD pid, const char* c_szName, const char* item_name, DWORD item_id, int bType, int value, int maxvalue)
{
	m_sql.EscapeString(__escape_hint, sizeof(__escape_hint), item_name, strlen(item_name));

	Query("INSERT INTO wrong_item_log%s VALUES(NOW(), %u, '%s', '%s', %u, %u, %u, %u)",
		get_table_postfix(), pid, c_szName, __escape_hint, item_id, bType, value, maxvalue);
}
#endif