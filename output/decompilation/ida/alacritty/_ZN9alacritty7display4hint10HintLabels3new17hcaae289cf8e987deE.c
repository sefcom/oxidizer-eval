_QWORD *__fastcall alacritty::display::hint::HintLabels::new(__int64 a1)
{
  __int64 v1; // r14
  _QWORD *result; // rax
  __int64 v3; // r14
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h]
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  <T as alloc::string::ToString>::to_string(v10);
  core::iter::traits::iterator::Iterator::collect(&v8, v11, v11 + v12);
  core::ptr::drop_in_place<alloc::string::String>(v10);
  v1 = v9;
  result = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v3 = v1 - 1;
  if ( v3 < 0 )
    v4 = (float)(int)(((unsigned __int64)v3 >> 1) | v3 & 1) + (float)(int)(((unsigned __int64)v3 >> 1) | v3 & 1);
  else
    v4 = (float)(int)v3;
  v5 = v4 * 0.5;
  v6 = 0LL;
  if ( v5 >= 0.0 )
    v6 = (unsigned int)(int)v5;
  v7 = -1LL;
  if ( v5 <= 1.8446743e19 )
    v7 = v6;
  *result = 0LL;
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)(a1 + 48) = v7;
  return result;
}