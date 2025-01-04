__int64 __fastcall uu_sort::get_rand_string(__int64 a1)
{
  _QWORD v2[2]; // [rsp+8h] [rbp-10h] BYREF

  v2[0] = rand::rngs::thread::thread_rng();
  rand::rng::Rng::sample(a1, v2);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(v2);
  return a1;
}
