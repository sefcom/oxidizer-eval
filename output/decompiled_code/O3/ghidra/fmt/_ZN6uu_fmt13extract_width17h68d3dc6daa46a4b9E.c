void __rustcall uu_fmt::extract_width(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char local_88 [8];
  undefined **local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined local_48 [24];
  undefined4 local_30;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_b8,param_2,"width");
  lVar3 = clap_builder::parser::error::MatchesError::unwrap("width",5,&local_b8);
  if (lVar3 == 0) {
    auVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"files",5);
    lVar3 = 8;
    uVar7 = 0;
    if ((auVar8._0_8_ == 1) && (auVar8._8_8_ == 1)) {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_b8,param_2,"files")
      ;
      lVar5 = clap_builder::parser::error::MatchesError::unwrap("files",5,&local_b8);
      if (lVar5 == 0) {
        core::option::unwrap_failed(&PTR_s_src_uu_fmt_src_fmt_rs_00227820);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = *(undefined8 *)(lVar5 + 8);
      uVar1 = *(undefined8 *)(lVar5 + 0x10);
      local_b8 = (undefined **)((ulong)local_b8._4_4_ << 0x20);
      uVar6 = core::char::methods::encode_utf8_raw(&local_b8);
      lVar5 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar6,uVar7,uVar1);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_b8,lVar5);
        param_1[1] = (ulong)local_b8 & 0xff ^ 1;
        lVar3 = 0x10;
        uVar7 = local_b0;
      }
    }
    *(undefined8 *)((long)param_1 + lVar3) = uVar7;
    *param_1 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(local_88,uVar7,uVar1);
    if (local_88[0] == '\0') {
      uVar4 = 1;
    }
    else {
      local_68 = 0;
      local_50 = 1;
      local_78 = &local_68;
      local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_b8 = &PTR_s_invalid_width__00227810;
      local_b0 = 1;
      local_98 = 0;
      local_a8 = &local_78;
      local_a0 = 1;
      local_60 = uVar7;
      local_58 = uVar1;
      core::option::Option<T>::map_or_else(local_48,&local_b8);
      local_30 = 1;
      uVar4 = ::alloc::boxed::Box<T>::new(local_48);
      local_80 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002276b0;
    }
    param_1[1] = uVar4;
    param_1[2] = (ulong)local_80;
    *param_1 = (ulong)(local_88[0] != '\0');
  }
  return;
}