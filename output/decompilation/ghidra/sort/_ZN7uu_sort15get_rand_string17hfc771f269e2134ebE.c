undefined8 _ZN7uu_sort15get_rand_string17hfc771f269e2134ebE(undefined8 param_1)

{
  undefined8 local_10;
  
  local_10 = (*(code *)PTR__ZN4rand4rngs6thread3rng17h4ff389470e265d23E_002975f0)();
                    /* try { // try from 001d64c3 to 001d64cf has its CatchHandler @ 001d64e3 */
  _ZN4rand3rng3Rng6sample17h1f7306a7ff6421f3E(param_1,&local_10);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hb7ded22a97c9c564E(&local_10);
  return param_1;
}