undefined8 * __rustcall uu_cut::get_delimiters(undefined8 *param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"whitespace-delimited",0x14);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_58,param_2,"delimiter",9);
  lVar3 = clap_builder::parser::error::MatchesError::unwrap("delimiter",9,&local_58);
  if (lVar3 == 0) {
    pcVar6 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar6 = "\t";
    }
    auVar7._8_8_ = 1;
    auVar7._0_8_ = pcVar6;
    goto LAB_001b749c;
  }
  if (cVar2 == '\0') {
    if (param_3 == '\0') {
      cVar2 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                        (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      auVar8._8_8_ = 1;
      auVar8._0_8_ = "";
      auVar7._8_8_ = 1;
      auVar7._0_8_ = "";
      if ((cVar2 == '\0') && (lVar1 = *(long *)(lVar3 + 0x10), auVar7 = auVar8, lVar1 != 0)) {
        uVar5 = *(undefined8 *)(lVar3 + 8);
        std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                  (&local_58,uVar5,lVar1);
        if (local_58 == 0) {
          uVar4 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                            (local_50,local_48 + local_50);
          if (uVar4 < 2) goto LAB_001b745e;
        }
        else {
LAB_001b745e:
          std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::
          try_from(&local_58,uVar5,lVar1);
          if ((lVar1 == 1) || (local_58 == 0)) {
            auVar7 = _<uu_cut::Delimiter_as_core::convert::From<&std::ffi::os_str::OsString>>::from
                               (lVar3);
            goto LAB_001b749c;
          }
        }
        pcVar6 = "the delimiter must be a single character";
        uVar5 = 0x28;
        goto LAB_001b73a4;
      }
    }
    else {
      auVar7._8_8_ = 1;
      auVar7._0_8_ = &DAT_0011dcc0;
    }
LAB_001b749c:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_58,param_2,&DAT_001153e0,0x10);
    auVar8 = clap_builder::parser::error::MatchesError::unwrap(&DAT_001153e0,0x10,&local_58);
    lVar3 = auVar8._0_8_;
    if (lVar3 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar8._8_8_;
      auVar9 = auVar9 << 0x40;
    }
    else {
      auVar9 = get_delimiters::___closure__
                         (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    }
    *(undefined (*) [16])(param_1 + 1) = auVar7;
    *(undefined (*) [16])(param_1 + 3) = auVar9;
    uVar5 = 0;
  }
  else {
    pcVar6 = "invalid input: Only one of --delimiter (-d) or -w option can be specified";
    uVar5 = 0x49;
LAB_001b73a4:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_58,pcVar6,uVar5);
    local_40 = 1;
    uVar5 = ::alloc::boxed::Box<T>::new(&local_58);
    param_1[1] = uVar5;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00228da0;
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return param_1;
}