void _ZN6uu_who8platform4unix3Who14print_boottime17h50688022477eb7c7E(undefined8 param_1)

{
  undefined local_20 [8];
  undefined4 local_18;
  undefined4 uStack_10;
  
  _ZN6uu_who8platform4unix11time_string17hf7b3fb93d48ce0b2E(local_20);
                    /* try { // try from 00168667 to 001686d3 has its CatchHandler @ 001686e4 */
  _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
            (param_1,1,0,0x20,"system boot",0xb,local_18,uStack_10,1,0,1,0,1,0,1,0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_20);
  return;
}