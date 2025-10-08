__int64 __fastcall uu_head::take::TakeAllLinesBuffer::write_lines(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  __int64 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  char **v19; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int128 v22[4]; // [rsp+18h] [rbp-40h] BYREF

  if ( !a4 )
  {
    v19 = &off_F7BC0;
    v20 = 1LL;
    v21 = 8LL;
    v22[0] = 0LL;
    ((void (__fastcall __noreturn *)(char ***, char **))core::panicking::panic_fmt)(&v19, &off_F7BE0);
  }
  v5 = a4;
  if ( a4 <= a2[4] )
  {
    LOBYTE(v22[0]) = a5;
    v19 = (char **)uu_head::take::TakeAllBuffer::remaining_buffer(a2);
    v20 = (__int64)v19;
    v21 = (__int64)v19 + v9;
    if ( ((__int64 (__fastcall *)(char ***, __int64))core::iter::traits::iterator::Iterator::advance_by)(&v19, v5 - 1)
      || memchr::arch::generic::memchr::Iter::next(&v19, v22) != 1 )
    {
      v19 = &off_F7BD0;
      v20 = 1LL;
      v21 = 8LL;
      v22[0] = 0LL;
      ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
        &v19,
        &off_F7BF8,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = a3;
    v15 = v10 + 1;
    v16 = uu_head::take::TakeAllBuffer::write_bytes_exact((__int64)a2, v14, v10 + 1);
    if ( v16 )
    {
      a1[1] = v16;
      goto LABEL_9;
    }
    v18 = a2[4] - v5;
    v8 = v15;
LABEL_12:
    a2[4] = v18;
    a1[1] = v8;
    a1[2] = v5;
    result = 0LL;
    goto LABEL_13;
  }
  if ( !uu_head::take::TakeAllBuffer::write_all((__int64)a2, a3) )
  {
    v5 = a2[4];
    v18 = 0LL;
    goto LABEL_12;
  }
  a1[1] = v8;
LABEL_9:
  result = 1LL;
LABEL_13:
  *a1 = result;
  return result;
}