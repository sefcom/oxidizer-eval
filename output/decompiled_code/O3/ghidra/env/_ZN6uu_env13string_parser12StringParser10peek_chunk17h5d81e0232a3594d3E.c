ulong * __rustcall uu_env::string_parser::StringParser::peek_chunk(ulong *param_1,long param_2)

{
  long local_48;
  ulong local_40;
  ulong uStack_38;
  
  get_chunk_with_length_at(&local_48,param_2,*(undefined8 *)(param_2 + 0x20));
  if (local_48 == 0) {
    param_1[1] = local_40;
    param_1[2] = uStack_38;
  }
  *param_1 = (ulong)(local_48 == 0);
  return param_1;
}