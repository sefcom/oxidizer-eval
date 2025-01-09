undefined __rustcall
uu_sort::random_shuffle
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong uVar1;
  undefined uVar2;
  undefined local_3a;
  undefined local_39;
  ulong local_38;
  
  local_38 = 0xcbf29ce484222325;
  _<fnv::FnvHasher_as_core::hash::Hasher>::write(&local_38,param_1,param_2);
  local_3a = 0xff;
  _<fnv::FnvHasher_as_core::hash::Hasher>::write(&local_38,&local_3a,1);
  core::hash::impls::_<impl_core::hash::Hash_for&T>::hash(param_5,&local_38);
  uVar1 = local_38;
  local_38 = 0xcbf29ce484222325;
  _<fnv::FnvHasher_as_core::hash::Hasher>::write(&local_38,param_3,param_4);
  local_39 = 0xff;
  _<fnv::FnvHasher_as_core::hash::Hasher>::write(&local_38,&local_39,1);
  core::hash::impls::_<impl_core::hash::Hash_for&T>::hash(param_5,&local_38);
  uVar2 = 0xff;
  if (local_38 <= uVar1) {
    uVar2 = uVar1 != local_38;
  }
  return uVar2;
}