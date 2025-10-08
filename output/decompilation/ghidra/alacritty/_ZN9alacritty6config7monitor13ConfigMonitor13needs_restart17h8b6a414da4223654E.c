byte _ZN9alacritty6config7monitor13ConfigMonitor13needs_restart17h8b6a414da4223654E
               (byte param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long extraout_RDX;
  
  bVar1 = _ZN9alacritty6config7monitor13ConfigMonitor10hash_paths17hbd080233d0377b89E
                    (param_3,param_4);
  bVar2 = 1;
  if ((bVar1 & 1) != 0) {
    bVar2 = extraout_RDX == param_2 & param_1;
  }
  return bVar2;
}