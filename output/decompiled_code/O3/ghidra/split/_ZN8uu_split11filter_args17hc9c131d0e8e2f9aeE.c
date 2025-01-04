undefined8 * __rustcall
uu_split::filter_args
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
          undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_50 = param_5;
                    /* try { // try from 001c9b57 to 001c9bc2 has its CatchHandler @ 001c9c24 */
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_68,param_2[1],param_2[2]);
  uVar1 = local_58;
  if (CONCAT44(uStack_64,local_68) == 0) {
    uVar2 = CONCAT44(uStack_5c,uStack_60);
    cVar3 = should_extract_obs_lines(uVar2,local_58,*param_4,*local_50);
    if (cVar3 == '\0') {
      std::sys::os_str::bytes::Slice::to_owned(&local_68,uVar2,uVar1);
    }
    else {
      handle_extract_obs_lines(&local_68,uVar2,uVar1,param_3);
    }
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
                    /* try { // try from 001c9bd6 to 001c9be8 has its CatchHandler @ 001c9c15 */
    handle_preceding_options(uVar2,uVar1,param_4,local_50);
    param_1[2] = local_38;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(param_2);
  }
  else {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  return param_1;
}