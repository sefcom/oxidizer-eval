void *__fastcall uu_hashsum::uu_app_bits(void *dest)
{
  __int64 v2; // [rsp+0h] [rbp-2D8h] BYREF

  uu_hashsum::uu_app_common(&v2);
  uu_hashsum::uu_app_opt_bits(dest);
  return dest;
}