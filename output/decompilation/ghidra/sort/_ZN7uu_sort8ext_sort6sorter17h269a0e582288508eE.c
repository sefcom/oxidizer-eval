void __rustcall uu_sort::ext_sort::sorter(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_40;
  long local_38;
  long local_30;
  
  local_40 = std::sync::mpmc::Receiver<T>::recv();
  if (local_40 != 0) {
    do {
      local_38 = local_40;
                    /* try { // try from 00267f0d to 00267f17 has its CatchHandler @ 00267f64 */
      sort_by(local_40 + 0x18,param_3,local_40 + 0x30);
      lVar1 = std::sync::mpmc::Sender<T>::send(param_2,local_38);
      local_30 = lVar1;
      core::ptr::
      drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::Chunk>>>
                (&local_30);
      if (lVar1 != 0) {
        return;
      }
      local_40 = std::sync::mpmc::Receiver<T>::recv(param_1);
    } while (local_40 != 0);
  }
  core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>
            (&local_40);
  return;
}