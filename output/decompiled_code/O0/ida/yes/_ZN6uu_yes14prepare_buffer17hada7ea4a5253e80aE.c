void __fastcall uu_yes::prepare_buffer(_QWORD *a1)
{
  unsigned __int64 v1; // r12
  size_t v3; // rbp
  size_t v4; // r15
  size_t v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  _BYTE *v13; // rcx
  size_t v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18[12]; // [rsp+8h] [rbp-60h] BYREF

  v1 = a1[2];
  if ( (v1 & 0x8000000000000000LL) != 0LL )
    core::panicking::panic_const::panic_const_mul_overflow(&off_FC460);
  if ( v1 <= 0x2000 )
  {
    if ( !v1 )
      core::panicking::panic(aAssertionFaile_4, 33LL, &off_FC490);
    v3 = (unsigned __int16)(0x4000 - 0x4000u % (unsigned __int16)v1);
    v4 = a1[2];
    do
    {
      v5 = v3 - v4;
      if ( v3 - v4 >= v4 )
        v5 = v4;
      if ( (v1 | v5) >> 32 )
      {
        v6 = v5 % v1;
        if ( v5 % v1 )
          goto LABEL_28;
      }
      else
      {
        v6 = (unsigned int)v5 % (unsigned int)v1;
        if ( (_DWORD)v6 )
        {
LABEL_28:
          v17 = v6;
          v18[0] = 0LL;
          ((void (__fastcall __noreturn *)(_QWORD, unsigned __int64 *, void *, __int64 *, char **))core::panicking::assert_failed)(
            0LL,
            &v17,
            &unk_17208,
            v18,
            &off_FC478);
        }
      }
      v7 = core::slice::index::range(v5, v4, &off_FC3D8);
      v9 = 0LL;
      if ( v8 >= v7 )
        v9 = v8 - v7;
      v10 = a1[2];
      if ( v9 > *a1 - v10 )
      {
        v15 = v8;
        v16 = v7;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v10, v9);
        v8 = v15;
        v7 = v16;
        v10 = a1[2];
      }
      v11 = a1[1];
      if ( !v11 || v10 < 0 || *a1 - v10 < 0 )
        core::panicking::panic_nounwind(aUnsafePrecondi_5, 166LL);
      if ( v8 < v7 || v10 < v8 )
        core::panicking::panic_nounwind(aUnsafePrecondi, 97LL);
      v12 = (_BYTE *)(v11 + v10);
      v13 = (_BYTE *)(v7 + v11);
      v14 = v12 - v13;
      if ( v10 <= (__int64)v7 )
        v14 = v13 - v12;
      if ( v14 < v9 )
        core::panicking::panic_nounwind(aUnsafePrecondi_4, 166LL);
      memcpy(v12, v13, v9);
      v4 = a1[2] + v9;
      a1[2] = v4;
    }
    while ( v4 < v3 );
  }
}
