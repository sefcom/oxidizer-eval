void *__fastcall uu_hashsum::uu_app_b3sum(void *dest)
{
  __int64 v2; // [rsp+0h] [rbp-2D8h] BYREF

  uu_hashsum::uu_app_common(&v2);
  uu_hashsum::uu_app_b3sum_opts(dest);
  return dest;
}