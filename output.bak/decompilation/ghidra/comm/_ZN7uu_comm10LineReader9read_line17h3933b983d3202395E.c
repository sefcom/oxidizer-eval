undefined  [16] __rustcall uu_comm::LineReader::read_line(long *param_1,long param_2)

{
  undefined uVar1;
  char cVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined8 local_38;
  uint local_30;
  
  uVar1 = *(undefined *)(param_1 + 6);
  if (*param_1 == 0) {
    local_38 = std::io::stdio::Stdin::lock(param_1 + 1);
    local_30 = CONCAT31(local_30._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 001aaa85 to 001aaa92 has its CatchHandler @ 001aaae0 */
    auVar3 = _<std::io::stdio::StdinLock_as_std::io::BufRead>::read_until(&local_38,uVar1,param_2);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(local_38,local_30);
  }
  else {
    auVar3 = std::io::read_until(param_1,uVar1,param_2);
  }
  local_38 = CONCAT71(local_38._1_7_,uVar1);
                    /* try { // try from 001aaab2 to 001aaacc has its CatchHandler @ 001aaaf2 */
  cVar2 = core::slice::_<impl[T]>::ends_with
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_38,1);
  if (cVar2 == '\0') {
    ::alloc::vec::Vec<T,A>::push(param_2,uVar1);
  }
  return auVar3;
}