long * __rustcall uu_df::blocks::read_block_size(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined auVar7 [16];
  undefined *local_80;
  long local_78;
  undefined8 **local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_28;
  
  cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(param_2,"blocksize",9)
  ;
  if (cVar4 == '\0') {
    cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"portability",0xb);
    if (cVar4 == '\0') {
      auVar7 = block_size_from_env();
      lVar5 = auVar7._8_8_;
      if (auVar7._0_8_ != 1) {
        lVar5 = _<uu_df::blocks::BlockSize_as_core::default::Default>::default();
      }
      param_1[1] = lVar5;
      goto LAB_001d4add;
    }
    local_78 = _<uu_df::blocks::BlockSize_as_core::default::Default>::default();
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_80,param_2,"blocksize",9);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap("blocksize",9,&local_80);
    if (lVar5 == 0) {
      core::option::unwrap_failed(&PTR_DAT_00241ed8);
      pcVar3 = (code *)swi(3);
      plVar6 = (long *)(*pcVar3)();
      return plVar6;
    }
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    uucore::parser::parse_size::parse_size_u64(&local_80,uVar1,uVar2);
    if (local_80 != (undefined *)0x3) {
      param_1[2] = (long)local_70;
      param_1[3] = lStack_68;
      *param_1 = (long)local_80;
      param_1[1] = local_78;
      return param_1;
    }
    if (local_78 == 0) {
      local_40 = 0;
      local_28 = 1;
      local_50 = &local_40;
      local_48 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_80 = &DAT_0010ba30;
      local_78 = 1;
      local_60 = 0;
      local_70 = &local_50;
      lStack_68 = 1;
      local_38 = uVar1;
      local_30 = uVar2;
      core::option::Option<T>::map_or_else(param_1 + 1,&local_80);
      *param_1 = 1;
      return param_1;
    }
  }
  param_1[1] = local_78;
LAB_001d4add:
  *param_1 = 3;
  return param_1;
}