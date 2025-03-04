ulong * _ZN6uu_env13string_parser12StringParser10peek_chunk17h29c563cfd7ddf009E
                  (ulong *param_1,long param_2)

{
  long local_28;
  ulong local_20;
  ulong uStack_18;
  
  _ZN6uu_env13string_parser12StringParser24get_chunk_with_length_at17h8f36f3de6fe605adE
            (&local_28,param_2,*(undefined8 *)(param_2 + 0x20));
  if (local_28 == 0) {
    param_1[1] = local_20;
    param_1[2] = uStack_18;
  }
  *param_1 = (ulong)(local_28 == 0);
  return param_1;
}