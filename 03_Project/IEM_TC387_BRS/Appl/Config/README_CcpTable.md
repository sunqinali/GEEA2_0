# CCP 白名单（CCdB 导入）

正式 **Car Configuration Database（CCdB）** 到位后：

1. 导出 IEM 订阅的 CCP#、合法取值（1 字节；Base Tech：`0x00`/`0xFF` 非法）
2. 填入或覆盖 `Appl_CarConfig_CcpTable.csv`
3. 运行 `python Tasking/gen_ccp_table.py`
4. `amk all` 重编

当前 CSV 为 bring-up **demo**（CCP#1..7，BlkID=1），与 `ZCANPRO_IEM_CarConfig_Smoke.py` 一致。
