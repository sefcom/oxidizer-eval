undefined8 __rustcall uu_sort::get_rand_string(undefined8 param_1)

{
  undefined8 local_10;
  
  local_10 = rand::rngs::thread::thread_rng();
                    /* try { // try from 00224463 to 0022446f has its CatchHandler @ 00224483 */
  rand::rng::Rng::sample(param_1,&local_10);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&local_10);
  return param_1;
}