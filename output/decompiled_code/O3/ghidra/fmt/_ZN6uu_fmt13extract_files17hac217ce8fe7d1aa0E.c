long * __rustcall uu_fmt::extract_files(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  undefined local_17a;
  undefined local_179;
  long local_178 [3];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long local_150;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 local_100;
  undefined local_f8 [64];
  undefined8 local_b8;
  undefined8 local_78;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  auVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"files",5);
  local_17a = auVar3._8_8_ == 1 && auVar3._0_8_ != 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&local_160,param_2,"files",5)
  ;
  clap_builder::parser::error::MatchesError::unwrap(local_f8,"files",5,&local_160);
  local_100 = 1;
  local_b8 = 0;
  local_78 = 0;
  local_38 = 0;
  local_30 = &local_179;
  local_28 = &local_17a;
  core::iter::adapters::try_process(local_178,&local_100);
  cVar1 = core::result::Result<T,E>::is_ok_and
                    ((ulong)(local_178[0] == -0x8000000000000000),
                     local_178 + (local_178[0] == -0x8000000000000000));
  if (cVar1 == '\0') {
    param_1[2] = local_178[2];
    *param_1 = local_178[0];
    param_1[1] = local_178[1];
  }
  else {
    puVar2 = (undefined4 *)::alloc::alloc::Global::alloc_impl(8,0x18);
    if (puVar2 == (undefined4 *)0x0) {
                    /* try { // try from 001b5df3 to 001b5e02 has its CatchHandler @ 001b5e10 */
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,0x18);
    }
                    /* try { // try from 001b5d69 to 001b5d81 has its CatchHandler @ 001b5e03 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_160,"-",1);
    local_108 = local_150;
    local_118 = local_160;
    uStack_114 = uStack_15c;
    uStack_110 = uStack_158;
    uStack_10c = uStack_154;
    *(long *)(puVar2 + 4) = local_150;
    *puVar2 = local_160;
    puVar2[1] = uStack_15c;
    puVar2[2] = uStack_158;
    puVar2[3] = uStack_154;
                    /* try { // try from 001b5da1 to 001b5db2 has its CatchHandler @ 001b5e10 */
    ::alloc::slice::hack::into_vec(&local_160,puVar2,1);
    param_1[2] = local_150;
    *(undefined4 *)param_1 = local_160;
    *(undefined4 *)((long)param_1 + 4) = uStack_15c;
    *(undefined4 *)(param_1 + 1) = uStack_158;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_154;
    core::ptr::
    drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
              (local_178);
  }
  return param_1;
}