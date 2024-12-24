void __rustcall
uu_tr::operation::Sequence::from_str(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_89;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined local_38 [32];
  
  nom::multi::many0::___closure__(&local_68,&local_89,param_2,param_3);
  if (local_68 == 0) {
    uStack_70 = local_40;
    uStack_80 = local_50;
    uStack_7c = uStack_4c;
    local_88 = 3;
  }
  else {
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_88 = CONCAT44(uStack_5c,local_60);
    uStack_80 = uStack_58;
    uStack_7c = uStack_54;
  }
  core::result::Result<T,E>::unwrap(&local_68,&local_88);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_38,&local_68)
  ;
  core::iter::adapters::try_process(param_1,local_38);
  return;
}