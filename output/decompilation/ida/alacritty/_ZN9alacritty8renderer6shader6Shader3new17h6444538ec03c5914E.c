void __fastcall __noreturn alacritty::renderer::shader::Shader::new(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  char v8; // bp
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  void *v13; // rsi
  _QWORD v14[3]; // [rsp+8h] [rbp-90h] BYREF
  int v15; // [rsp+24h] [rbp-74h]
  _QWORD v16[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]

  v18 = a6;
  v15 = a5;
  v17 = a4;
  v8 = a2;
  v9 = 18;
  if ( a2 )
    v9 = 36;
  v16[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(3LL, 8LL, 8LL, &off_883AA0);
  v16[1] = v10;
  v16[2] = 0LL;
  v11 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(3LL, 4LL, 4LL, &off_883AB8);
  v13 = &unk_104FE9;
  if ( v8 )
    v13 = &unk_104FFB;
  v14[0] = v11;
  v14[1] = v12;
  v14[2] = 0LL;
  alloc::vec::Vec<T,A>::push(v16, v13, &off_883AD0);
  alloc::vec::Vec<T,A>::push(v14, v9, &off_883AE8);
  if ( a3 )
  {
    alloc::vec::Vec<T,A>::push(v16, a3, &off_883B00);
    alloc::vec::Vec<T,A>::push(v14, v17, &off_883B18);
  }
  alloc::vec::Vec<T,A>::push(v16, v18, &off_883B30);
  alloc::vec::Vec<T,A>::push(v14, a7, &off_883B48);
  alacritty::gl::storage::CreateShader();
}