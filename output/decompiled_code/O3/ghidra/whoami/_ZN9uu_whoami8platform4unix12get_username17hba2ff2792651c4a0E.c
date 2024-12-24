void __rustcall uu_whoami::platform::unix::get_username(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined local_a8 [24];
  long local_90;
  undefined8 local_88;
  
  uVar1 = uucore::features::process::geteuid();
  _<uucore::features::entries::Passwd_as_uucore::features::entries::Locate<u32>>::locate
            (&local_90,uVar1);
  if (local_90 == -0x8000000000000000) {
    param_1[1] = local_88;
    *param_1 = 0x8000000000000000;
  }
  else {
    uucore::features::entries::uid2usr::___closure__(local_a8,&local_90);
    core::ops::function::FnOnce::call_once(param_1,local_a8);
  }
  return;
}