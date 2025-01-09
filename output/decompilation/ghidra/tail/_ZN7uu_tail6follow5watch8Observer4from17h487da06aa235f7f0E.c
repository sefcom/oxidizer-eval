undefined8 __rustcall uu_tail::follow::watch::Observer::from(undefined8 param_1,long param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined local_80 [80];
  
  uVar1 = *(undefined *)(param_2 + 0x48);
  uVar2 = *(undefined *)(param_2 + 0x49);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  files::FileHandling::from(local_80);
  new(param_1,uVar1,uVar3,uVar2,local_80,*(undefined4 *)(param_2 + 0x44));
  return param_1;
}