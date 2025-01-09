undefined8 * __rustcall
uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii
          (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  uint local_48;
  long local_40 [2];
  
  local_70 = 0;
  uStack_68 = 8;
  local_60 = 0;
  do {
                    /* try { // try from 001d65c0 to 001d6635 has its CatchHandler @ 001d66a0 */
    consume_chunk(&local_58,param_2);
    uVar1 = local_48;
    if (local_58 != 0) {
      param_1[1] = local_50;
      *(undefined *)(param_1 + 2) = (undefined)local_48;
      *param_1 = 0x8000000000000000;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>(&local_70);
      return param_1;
    }
    local_40[0] = local_50;
    if (local_50 == 0) {
      ::alloc::vec::Vec<T,A>::push(&local_70,local_40);
      if (uVar1 < 0x80) {
LAB_001d6655:
        param_1[2] = local_60;
        *param_1 = local_70;
        param_1[1] = uStack_68;
        return param_1;
      }
    }
    else {
      ::alloc::vec::Vec<T,A>::push(&local_70,local_40);
    }
    peek_chunk(&local_58,param_2);
    if ((local_58 == 0) || ((local_50 == 0 && (local_48 < 0x80)))) goto LAB_001d6655;
  } while( true );
}