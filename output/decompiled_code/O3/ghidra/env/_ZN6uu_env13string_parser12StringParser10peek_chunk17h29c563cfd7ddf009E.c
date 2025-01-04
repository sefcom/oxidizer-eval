ulong * __rustcall uu_env::string_parser::StringParser::peek_chunk(ulong *param_1,long param_2)

{
  long local_28;
  ulong local_20;
  ulong uStack_18;
  
  get_chunk_with_length_at(&local_28,param_2,*(undefined8 *)(param_2 + 0x20));
  if (local_28 == 0) {
    param_1[1] = local_20;
    param_1[2] = uStack_18;
  }
  *param_1 = (ulong)(local_28 == 0);
  return param_1;
}