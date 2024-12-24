undefined8 * __rustcall
uu_uniq::filter_args
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined *param_5,undefined *param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined *local_40;
  undefined *local_38;
  
                    /* try { // try from 001bd3ae to 001bd448 has its CatchHandler @ 001bd558 */
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_80,param_2[1],param_2[2]);
  uVar3 = local_70;
  if (CONCAT44(uStack_7c,local_80) != 0) {
    param_1[2] = param_2[2];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar4 = CONCAT44(uStack_74,uStack_78);
  uVar1 = *local_40;
  uVar2 = *local_38;
  cVar6 = should_extract_obs_skip_fields(uVar4,local_70,uVar1,uVar2);
  if (cVar6 == '\0') {
    cVar6 = should_extract_obs_skip_chars(uVar4,uVar3,uVar1,uVar2);
    if (cVar6 == '\0') {
                    /* try { // try from 001bd49f to 001bd4b0 has its CatchHandler @ 001bd558 */
      std::sys::os_str::bytes::Slice::to_owned(&local_80,uVar4,uVar3);
      local_58 = local_70;
      local_68 = local_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
                    /* try { // try from 001bd4c5 to 001bd4dc has its CatchHandler @ 001bd549 */
      cVar6 = core::slice::_<impl[T]>::starts_with(uVar4,uVar3,"-f",2);
      if (cVar6 != '\0') {
                    /* try { // try from 001bd4eb to 001bd4f2 has its CatchHandler @ 001bd540 */
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_3);
        *param_3 = 0x8000000000000000;
      }
                    /* try { // try from 001bd4f7 to 001bd50e has its CatchHandler @ 001bd549 */
      cVar6 = core::slice::_<impl[T]>::starts_with(uVar4,uVar3,"-s",2);
      puVar5 = local_48;
      if (cVar6 != '\0') {
                    /* try { // try from 001bd521 to 001bd52d has its CatchHandler @ 001bd537 */
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(local_48);
        *puVar5 = 0x8000000000000000;
      }
      goto LAB_001bd45d;
    }
    handle_extract_obs_skip_chars(&local_80,uVar4,uVar3,local_48);
  }
  else {
    handle_extract_obs_skip_fields(&local_80,uVar4,uVar3,param_3);
  }
  local_58 = local_70;
  local_68 = local_80;
  uStack_64 = uStack_7c;
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
LAB_001bd45d:
                    /* try { // try from 001bd45d to 001bd472 has its CatchHandler @ 001bd549 */
  handle_preceding_options(uVar4,uVar3,local_40,local_38);
  param_1[2] = local_58;
  *(undefined4 *)param_1 = local_68;
  *(undefined4 *)((long)param_1 + 4) = uStack_64;
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(param_2);
  return param_1;
}