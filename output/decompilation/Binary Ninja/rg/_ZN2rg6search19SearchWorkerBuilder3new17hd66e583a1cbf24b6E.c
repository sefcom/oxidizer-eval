
  int64_t rg::search::SearchWorkerBuilder::new::hd66e583a1cbf24b6(void* arg1)

{
    int128_t var_d0;
    grep_cli::decompress::DecompressionReaderBuilder::new::h6380b147629468c0(&var_d0);
    char var_98 = 1;
    void var_90;
    _$LT$rg..search..Config$u20$as$u20$core..default..Default$GT$::default::h3a3ab2ba64f10d63(
        &var_90);
    int128_t zmm0 = var_d0;
    int128_t var_a0;
    *(arg1 + 0xb8) = var_a0;
    int128_t var_b0;
    *(arg1 + 0xa8) = var_b0;
    int128_t var_c0;
    *(arg1 + 0x98) = var_c0;
    *(arg1 + 0x88) = zmm0;
    int64_t result = memcpy(arg1, &var_90, 0x88);
    *(arg1 + 0xc8) = 1;
    return result;
}
