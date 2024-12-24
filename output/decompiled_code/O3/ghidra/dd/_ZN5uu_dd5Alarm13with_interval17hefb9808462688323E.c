undefined8 * __rustcall uu_dd::Alarm::with_interval(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined local_20 [24];
  
  local_60 = 1;
  local_58 = 1;
  local_50 = local_50 & 0xffffffffffffff00;
  local_68 = ::alloc::boxed::Box<T>::new(&local_60);
                    /* try { // try from 001d682d to 001d688f has its CatchHandler @ 001d68af */
  local_38 = ::alloc::sync::Arc<T,A>::downgrade(&local_68);
  local_30 = 1;
  local_28 = 0;
  local_50 = 0x8000000000000000;
  local_60 = 0;
  std::thread::Builder::spawn_unchecked(local_20,&local_60,&local_38);
  core::result::Result<T,E>::expect(&local_60,local_20);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&local_60);
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = local_68;
  return param_1;
}