void __rustcall uu_tail::paths::Input::is_tailable(long param_1)

{
  undefined local_20 [24];
  
  if (*(long *)(param_1 + 0x18) == -0x8000000000000000) {
    resolve(local_20);
    core::option::Option<T>::map_or(local_20);
    return;
  }
  path_is_tailable(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}