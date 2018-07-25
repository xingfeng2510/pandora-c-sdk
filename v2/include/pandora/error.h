#ifndef PANDORA_C_ERROR_H
#define PANDORA_C_ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PANDORAE_OK = 0,
    PANDORAE_FAILED_INIT,
    PANDORAE_INVALID_ARGUMENT,
    PANDORAE_INVALID_CLIENT,

    PANDORAE_CACHE_POLICY_INIT,
    PANDORAE_WRITE_CACHE,
    PANDORAE_NO_CACHE_DIR,
    PANDORAE_CREATE_CACHE,
    PANDORAE_READ_CACHE,
    PANDORAE_DELETE_CACHE,

    PANDORAE_OUT_OF_MEMORY,
    PANDORAE_FAILED_CONNECT,
    PANDORAE_INTERNAL_ERROR,
    PANDORAE_REQUEST_TIMEOUT,
    PANDORAE_WRITE_FAILED,
    PANDORAE_CONNECTION_FAILED,
} pandora_error_t;

#ifdef __cplusplus
}
#endif

#endif //PANDORA_C_ERROR_H
