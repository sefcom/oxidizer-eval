__int64 __fastcall rg::flags::hiargs::HiArgs::matcher_pcre2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+18h] [rbp-20h]

  v7[0] = &off_3EAEA8;
  v7[1] = 1LL;
  v7[2] = 8LL;
  v8 = 0LL;
  result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))anyhow::__private::format_err)(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6);
  *(_QWORD *)a1 = result;
  *(_BYTE *)(a1 + 99) = 2;
  return result;
}