ulong * _ZN6uu_env13string_parser12StringParser10peek_chunk17hf5c7644aaf7843cbE
                  (ulong *param_1,long param_2)

{
  bool bVar1;
  byte local_28 [8];
  ulong local_20;
  ulong uStack_18;
  
  _ZN6uu_env13string_parser12StringParser24get_chunk_with_length_at17h90aefca5fb8ee726E
            (local_28,param_2,*(undefined8 *)(param_2 + 0x20));
  bVar1 = (local_28[0] & 1) == 0;
  if (bVar1) {
    param_1[1] = local_20;
    param_1[2] = uStack_18;
  }
  *param_1 = (ulong)bVar1;
  return param_1;
}