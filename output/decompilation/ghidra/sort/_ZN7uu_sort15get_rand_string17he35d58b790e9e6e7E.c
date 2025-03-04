undefined8 _ZN7uu_sort15get_rand_string17he35d58b790e9e6e7E(undefined8 param_1)

{
  undefined8 local_10;
  
  local_10 = _ZN4rand4rngs6thread10thread_rng17hb51ef0c041e68525E();
                    /* try { // try from 00224463 to 0022446f has its CatchHandler @ 00224483 */
  _ZN4rand3rng3Rng6sample17h9a4d1690a9be04b9E(param_1,&local_10);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hb7599d4f5721d48eE(&local_10);
  return param_1;
}