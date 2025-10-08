__int64 __fastcall meilitool::upgrade::v1_10::find_rest_embedders(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _OWORD *v10; // rcx
  __int128 v11; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-1C8h]
  _QWORD *v13; // [rsp+18h] [rbp-1C0h]
  __int128 v14; // [rsp+20h] [rbp-1B8h]
  _QWORD v15[2]; // [rsp+38h] [rbp-1A0h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-190h] BYREF
  _QWORD src[20]; // [rsp+68h] [rbp-170h] BYREF
  _OWORD dest[13]; // [rsp+108h] [rbp-D0h] BYREF

  v15[0] = a2;
  v15[1] = a3;
  meilitool::try_opening_poly_database(dest, a4, a5, "main.", 4LL);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(src, dest, v15);
  if ( LODWORD(src[0]) == 1 )
  {
    a1[1] = src[1];
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = 8LL;
    v12 = 0LL;
    heed::databases::database::Database<KC,DC,C,CDUP>::get(dest, src[1], LODWORD(src[2]), a5);
    v8 = *((_QWORD *)&dest[0] + 1);
    v14 = dest[1];
    if ( LODWORD(dest[0]) == 1 )
    {
      *(_OWORD *)((char *)dest + 8) = v14;
      *(_QWORD *)&dest[0] = v8;
      a1[1] = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v11);
    }
    else
    {
      v9 = (_QWORD *)-*((_QWORD *)&dest[0] + 1);
      v13 = a1;
      if ( __OFSUB__(-*((_QWORD *)&dest[0] + 1), 1LL) )
      {
        src[1] = 8LL;
        src[2] = 0LL;
        v8 = 0LL;
      }
      else
      {
        v9 = &src[1];
        *(_OWORD *)&src[1] = v14;
      }
      src[0] = v8;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, src, v7, v9);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v16);
      while ( LODWORD(src[0]) != 6 )
      {
        memcpy(dest, src, 0xA0uLL);
        if ( LODWORD(dest[0]) >= 2 )
          core::ptr::drop_in_place<alloc::string::String>((char *)&dest[8] + 8);
        else
          alloc::vec::Vec<T,A>::push(&v11, &src[17], &off_525FC0);
        core::ptr::drop_in_place<meilitool::upgrade::v1_9::EmbeddingConfig>(src);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v16);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilitool::upgrade::v1_9::IndexEmbeddingConfig>>(v16);
      v10 = v13;
      result = v12;
      v13[2] = v12;
      *v10 = v11;
    }
  }
  return result;
}