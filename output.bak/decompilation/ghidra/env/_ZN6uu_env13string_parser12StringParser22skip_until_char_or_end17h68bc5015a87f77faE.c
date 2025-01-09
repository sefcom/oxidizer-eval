void __rustcall
uu_env::string_parser::StringParser::skip_until_char_or_end(long param_1,undefined4 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined extraout_DL;
  long lVar3;
  undefined auVar4 [16];
  undefined local_1d;
  undefined4 local_1c;
  long local_18;
  long local_10;
  
  local_1c = param_2;
  uVar2 = native_int_str::get_single_native_int_value(&local_1c);
  if ((uVar2 & 1) != 0) {
    local_18 = *(long *)(param_1 + 0x10);
    local_10 = *(long *)(param_1 + 0x18) + local_18;
    local_1d = extraout_DL;
    auVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                       (&local_18,&local_1d);
    if (auVar4._0_8_ == 1) {
      lVar3 = auVar4._8_8_ + *(long *)(param_1 + 0x20);
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
    }
    set_pointer(param_1,lVar3);
    return;
  }
  core::option::unwrap_failed(&PTR_s_src_uu_env_src_string_parser_rs_00248ed8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}