long _ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17h83fd2d9f8818f482E(&local_28);
                    /* try { // try from 001a2639 to 001a2675 has its CatchHandler @ 001a2678 */
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h5989fafa25455cd3E
                    (param_1 + 0x18,&local_28);
  if (lVar2 != 0) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_28,local_20);
    return lVar2 + 0x18;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_002733d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}