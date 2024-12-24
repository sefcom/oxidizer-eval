ulong __rustcall uu_mv::is_empty_dir(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  ulong uVar1;
  long local_58;
  char local_50;
  long local_48 [6];
  long local_18;
  char local_10;
  
  std::fs::read_dir(&local_58,param_1,param_2);
  if (local_50 == '\x02') {
    local_48[0] = local_58;
    core::ptr::drop_in_place<std::io::error::Error>(local_48);
    uVar1 = 0;
  }
  else {
    local_18 = local_58;
    local_10 = local_50;
    local_48[0] = 2;
                    /* try { // try from 001eb38e to 001eb397 has its CatchHandler @ 001eb3b3 */
    core::option::Option<T>::get_or_insert_with(local_48,&local_18);
    uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),local_48[0] == 0);
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::fs::ReadDir>>(local_48);
  }
  return uVar1 & 0xffffffff;
}