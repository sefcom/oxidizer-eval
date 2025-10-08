void _ZN7uu_tail6follow5files12FileHandling6remove17h45671f4f92c48796E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_108;
  undefined8 local_100;
  int local_f0 [54];
  
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17h83fd2d9f8818f482E
            (&local_108,param_3,param_4);
                    /* try { // try from 001a25a7 to 001a25b6 has its CatchHandler @ 001a25fb */
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17hd48e343bc923ab41E
            (local_f0,param_2 + 0x18,&local_108);
  if (local_f0[0] != 3) {
    (*(code *)PTR_memcpy_0027d2f0)(param_1,local_f0,0xd8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_108,local_100);
    return;
  }
                    /* try { // try from 001a25ec to 001a25f8 has its CatchHandler @ 001a25fb */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_002733c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}