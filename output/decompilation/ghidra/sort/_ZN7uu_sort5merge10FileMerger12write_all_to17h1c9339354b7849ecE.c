undefined  [16] __rustcall
uu_sort::merge::FileMerger::write_all_to(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_38 [24];
  
  do {
                    /* try { // try from 00232cc0 to 00232ccd has its CatchHandler @ 00232d55 */
    cVar1 = write_next(param_1,param_2,param_3);
  } while (cVar1 != '\0');
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
                    /* try { // try from 00232cdc to 00232d0f has its CatchHandler @ 00232d4d */
  core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>
            (&local_58);
  local_48 = *(undefined8 *)(param_1 + 0x10);
  local_58 = param_1[0xc];
  uStack_54 = param_1[0xd];
  uStack_50 = param_1[0xe];
  uStack_4c = param_1[0xf];
  std::thread::JoinInner<T>::join(local_38,&local_58);
  auVar2 = core::result::Result<T,E>::unwrap(local_38);
                    /* try { // try from 00232d1a to 00232d1e has its CatchHandler @ 00232d3c */
  core::ptr::
  drop_in_place<binary_heap_plus::binary_heap::BinaryHeap<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>
            (param_1 + 4);
  core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(param_1 + 0x12);
  return auVar2;
}