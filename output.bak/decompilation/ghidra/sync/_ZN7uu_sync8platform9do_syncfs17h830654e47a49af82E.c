void __rustcall uu_sync::platform::do_syncfs(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [32];
  undefined local_40 [16];
  
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_60,param_1);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_90,local_60);
  puVar1 = PTR_syscall_002129f0;
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    do {
      local_68 = local_80;
      local_78 = local_90;
      uStack_74 = uStack_8c;
      uStack_70 = uStack_88;
      uStack_6c = uStack_84;
                    /* try { // try from 001aabb4 to 001aabcb has its CatchHandler @ 001aac16 */
      std::fs::File::open(local_40,&local_78);
      uVar2 = core::result::Result<T,E>::unwrap(local_40,&PTR_s_src_uu_sync_src_sync_rs_0020f060);
      (*(code *)puVar1)(0x132,uVar2);
      core::ptr::drop_in_place<std::fs::File>(uVar2);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_90,local_60);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(local_60);
  return;
}