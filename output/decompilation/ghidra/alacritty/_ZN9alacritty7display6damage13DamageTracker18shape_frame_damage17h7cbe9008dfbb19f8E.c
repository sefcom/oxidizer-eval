void _ZN9alacritty7display6damage13DamageTracker18shape_frame_damage17h7cbe9008dfbb19f8E
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 local_a8 [4];
  undefined local_88 [24];
  long local_70;
  undefined local_68 [80];
  
  if (*(char *)(param_2 + 0x48) == '\0') {
    (*(code *)PTR__ZN18alacritty_terminal4term18TermDamageIterator3new17h9c507061ce1d7d92E_009de598)
              (local_88,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),0);
    local_a8[0] = 2;
    local_70 = param_3;
    _ZN4core4iter6traits8iterator8Iterator5chain17hff1f0321ff3c8de1E
              (local_68,local_a8,*(long *)(param_2 + 0x38),
               *(long *)(param_2 + 0x40) * 0x10 + *(long *)(param_2 + 0x38));
    _ZN4core4iter6traits8iterator8Iterator7collect17h56adc802e5caf7e3E(param_1,local_68);
  }
  else {
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,0x10,0);
    if (puVar2 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(4,0x10);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *puVar2 = 0;
    puVar2[1] = *(undefined8 *)(param_3 + 0x10);
    *param_1 = 1;
    param_1[1] = puVar2;
    param_1[2] = 1;
  }
  return;
}