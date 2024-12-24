undefined8 * __rustcall
uu_cksum::handle_tag_text_binary_flags(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [32];
  
  bVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"untagged",8);
  bVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,&DAT_00165f7f,3);
  bVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,&DAT_00165f82,6);
  std::env::args_os(local_48);
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_60,local_48);
                    /* try { // try from 002e2ddc to 002e2de0 has its CatchHandler @ 002e2e19 */
  bVar4 = had_reset(local_58,local_50);
  bVar2 = bVar2 | bVar1 ^ 1;
  *(byte *)(param_1 + 1) = bVar2;
  *(byte *)((long)param_1 + 9) = bVar3 & ((bVar4 | bVar2) ^ 1);
  *param_1 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_60);
  return param_1;
}