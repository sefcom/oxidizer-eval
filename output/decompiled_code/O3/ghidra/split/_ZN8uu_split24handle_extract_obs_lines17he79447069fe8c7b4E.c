void __rustcall
uu_split::handle_extract_obs_lines
          (undefined8 *param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined local_b9;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined local_a0 [8];
  long local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_b8 = 0;
  local_b0 = 4;
  local_a8 = 0;
  local_b9 = 0;
  local_68 = param_2 + param_3;
  local_60 = &local_b9;
  local_58 = &local_b8;
                    /* try { // try from 001c9e9c to 001c9eaa has its CatchHandler @ 001c9f99 */
  local_70 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_a0,&local_70);
  if (local_a8 == 0) {
    std::sys::os_str::bytes::Slice::to_owned(&local_38,param_2,param_3);
    param_1[2] = local_28;
    *(undefined4 *)param_1 = local_38;
    *(undefined4 *)((long)param_1 + 4) = uStack_34;
    *(undefined4 *)(param_1 + 1) = uStack_30;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
  }
  else {
                    /* try { // try from 001c9ebe to 001c9ec7 has its CatchHandler @ 001c9f8a */
    _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
              (&local_88,local_b0,local_b0 + local_a8 * 4);
                    /* try { // try from 001c9ec8 to 001c9ecf has its CatchHandler @ 001c9f73 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_4);
    *(undefined8 *)(param_4 + 4) = local_78;
    *param_4 = local_88;
    param_4[1] = uStack_84;
    param_4[2] = uStack_80;
    param_4[3] = uStack_7c;
    if (local_90 < 2) {
      *param_1 = 0x8000000000000000;
    }
    else {
                    /* try { // try from 001c9ef6 to 001c9f29 has its CatchHandler @ 001c9f8a */
      _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                (&local_50,local_98,local_98 + local_90 * 4);
      param_1[2] = local_40;
      *(undefined4 *)param_1 = local_50;
      *(undefined4 *)((long)param_1 + 4) = uStack_4c;
      *(undefined4 *)(param_1 + 1) = uStack_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
    }
  }
                    /* try { // try from 001c9f50 to 001c9f59 has its CatchHandler @ 001c9f99 */
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(local_a0);
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(&local_b8);
  return;
}