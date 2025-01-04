void *__fastcall uu_shred::BytesWriter::from_pass_type(char *a1, _BYTE *a2)
{
  char v2; // bp
  void *result; // rax
  __int64 i; // rax
  __int64 v5; // rdx
  _BYTE v6[44]; // [rsp-1F02Ch] [rbp-20058h] BYREF
  _BYTE v7[4]; // [rsp-1F000h] [rbp-2002Ch] BYREF
  __int64 v8; // [rsp-1EFFCh] [rbp-20028h] BYREF
  __int64 v9; // [rsp-1DFFCh] [rbp-1F028h] BYREF
  _BYTE v10[61438]; // [rsp-EFFEh] [rbp-1002Ah] BYREF

  do
    v8 = 0LL;
  while ( &v8 != (__int64 *)((char *)&v9 - (char *)&unk_20000) );
  if ( !*a2 )
  {
    memset(v7, (unsigned __int8)a2[1], (size_t)&unk_10002);
LABEL_9:
    *(__int64 *)((char *)&qword_10008 + (_QWORD)a1) = 0LL;
    result = memcpy(a1 + 1, v7, (size_t)&unk_10002);
    v2 = 1;
    goto LABEL_10;
  }
  if ( *a2 != 2 )
  {
    memset(v10, 0, (size_t)&unk_10002);
    ((void (__fastcall *)(_BYTE *, _BYTE *))core::slice::<impl [T]>::chunks_exact_mut)(v6, v10);
    for ( i = ((__int64 (__fastcall *)(_BYTE *))<core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next)(v6);
          i;
          i = ((__int64 (__fastcall *)(_BYTE *))<core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next)(v6) )
    {
      ((void (__fastcall *)(__int64, __int64, _BYTE *, __int64, char **))core::slice::<impl [T]>::copy_from_slice)(
        i,
        v5,
        a2 + 1,
        3LL,
        &off_138668);
    }
    memcpy(v7, v10, (size_t)&unk_10002);
    goto LABEL_9;
  }
  ((void (__fastcall *)(char *))rand_core::SeedableRng::from_entropy)(a1 + 16);
  v2 = 0;
  result = memset(a1 + 336, 0, (size_t)&unk_10000);
LABEL_10:
  *a1 = v2;
  return result;
}
