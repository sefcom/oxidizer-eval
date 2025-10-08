void _ZN4just8justfile8Justfile10get_recipe17h2487a07572812fbdE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  plVar1 = (long *)_ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h3ce94925646e0fd0E
                             (*(undefined8 *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2c0),
                              param_2,param_3);
  if (plVar1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1 + 0x10;
  }
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  _ZN4core6option15Option_LT_T_GT_7or_else17h9ab329f3c1d0b2c6E(lVar2,&local_30);
  return;
}