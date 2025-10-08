void _ZN2rg5flags5parse14set_log_levels17h439e558fa954fe77E(long param_1)

{
  long lVar1;
  
  _ZN2rg8messages12set_messages17h3dbf7f04d5c7e618E(*(byte *)(param_1 + 0x242) ^ 1);
  _ZN2rg8messages19set_ignore_messages17haf3e3e018d552ea8E(*(byte *)(param_1 + 0x23f) ^ 1);
  lVar1 = (ulong)*(byte *)(param_1 + 599) + 4;
  if ((ulong)*(byte *)(param_1 + 599) == 2) {
    lVar1 = 2;
  }
  _ZN4core4sync6atomic12atomic_store17h203af5ccc9196054E
            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,lVar1,0);
  return;
}