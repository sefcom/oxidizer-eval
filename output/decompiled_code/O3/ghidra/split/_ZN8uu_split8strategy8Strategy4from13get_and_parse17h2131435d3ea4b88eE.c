void __rustcall
uu_split::strategy::Strategy::from::get_and_parse
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          code *param_5,code *param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50 [2];
  long local_48;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_78);
  lVar2 = clap_builder::parser::error::MatchesError::unwrap(param_3,param_4,&local_78);
  if (lVar2 != 0) {
    uucore::parser::parse_size::parse_size_u64_max
              (local_50,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_50[0] == 3) {
      if (local_48 == 0) {
        _<alloc::string::String_as_core::clone::Clone>::clone(&uStack_70,lVar2);
        local_78 = 1;
        (*param_6)(param_1,&local_78);
      }
      else {
        (*param_5)(param_1 + 1);
        *param_1 = 4;
      }
    }
    else {
      core::ops::function::FnOnce::call_once(&local_78,param_6,local_50);
      param_1[4] = local_58;
      param_1[2] = local_68;
      param_1[3] = uStack_60;
      *param_1 = local_78;
      param_1[1] = uStack_70;
    }
    return;
  }
  core::option::unwrap_failed(&PTR_DAT_00248f30);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}