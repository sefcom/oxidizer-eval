__int64 __fastcall alacritty::renderer::text::gles2::Batch::new(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = alloc::raw_vec::RawVecInner<A>::with_capacity_in(65532LL, 4LL, 24LL, &off_883ED8);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}