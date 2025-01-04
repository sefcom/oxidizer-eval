void __rustcall
uu_uniq::handle_extract_obs_skip_chars
          (undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  ulong extraout_RDX;
  undefined8 local_98;
  long local_90;
  long local_88;
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
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_98 = 0;
  local_90 = 4;
  local_88 = 0;
  uStack_40 = param_2 + param_3;
  local_48 = param_2;
  core::str::validations::next_code_point(&local_48);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  do {
    iVar1 = core::str::validations::next_code_point(&local_68);
    if (iVar1 == 0) {
      if (local_88 == 0) {
        std::sys::os_str::bytes::Slice::to_owned(&local_80,param_2,param_3);
LAB_001bdc93:
        param_1[2] = local_70;
        *(undefined4 *)param_1 = local_80;
        *(undefined4 *)((long)param_1 + 4) = uStack_7c;
        *(undefined4 *)(param_1 + 1) = uStack_78;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      }
      else {
                    /* try { // try from 001bdc13 to 001bdc1c has its CatchHandler @ 001bdce4 */
        _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                  (&local_80,local_90,local_90 + local_88 * 4);
        local_58 = local_70;
        local_68 = local_80;
        uStack_64 = uStack_7c;
        uStack_60 = uStack_78;
        uStack_5c = uStack_74;
                    /* try { // try from 001bdc31 to 001bdc38 has its CatchHandler @ 001bdcbb */
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_4);
        param_4[2] = local_58;
        *(undefined4 *)param_4 = local_68;
        *(undefined4 *)((long)param_4 + 4) = uStack_64;
        *(undefined4 *)(param_4 + 1) = uStack_60;
        *(undefined4 *)((long)param_4 + 0xc) = uStack_5c;
        *param_1 = 0x8000000000000000;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<char>>(&local_98);
      return;
    }
    if (9 < (int)extraout_RDX - 0x30U) {
                    /* try { // try from 001bdc5a to 001bdc61 has its CatchHandler @ 001bdcd2 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_4);
      *param_4 = 0x8000000000000000;
                    /* try { // try from 001bdc6f to 001bdc92 has its CatchHandler @ 001bdce4 */
      std::sys::os_str::bytes::Slice::to_owned(&local_80,param_2,param_3);
      goto LAB_001bdc93;
    }
                    /* try { // try from 001bdbf4 to 001bdbfd has its CatchHandler @ 001bdce6 */
    ::alloc::vec::Vec<T,A>::push(&local_98,extraout_RDX & 0xffffffff);
  } while( true );
}