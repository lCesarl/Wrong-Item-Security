// SEARCH
void		QuestRewardLog(const char * c_pszQuestName, DWORD dwPID, DWORD dwLevel, int iValue1, int iValue2);

// PASTE UNDER
#ifdef PUSH_ITEM_SECURITY
		void		WrongItemLog(DWORD pid, const char* c_szName, const char* item_name, DWORD item_id, int bType, int value, int maxvalue);
#endif