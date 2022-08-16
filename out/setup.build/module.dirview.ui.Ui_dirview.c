/* Generated code for Python module 'dirview.ui.Ui_dirview'
 * created by Nuitka version 1.0rc3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_dirview$ui$Ui_dirview" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dirview$ui$Ui_dirview;
PyDictObject *moduledict_dirview$ui$Ui_dirview;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[186];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[186];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("dirview.ui.Ui_dirview"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 186; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dirview$ui$Ui_dirview(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 186; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ac559644d6135bd8e01bfc36e47e0a9e;
static PyCodeObject *codeobj_5bfef095a31bacf75a93852953fa2e59;
static PyCodeObject *codeobj_8fcaec3c550f93c1a6bfd94b5ef4656a;
static PyCodeObject *codeobj_e1f30226d3f0d982844f6f505566a776;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[180]); CHECK_OBJECT(module_filename_obj);
    codeobj_ac559644d6135bd8e01bfc36e47e0a9e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[181], NULL, NULL, 0, 0, 0);
    codeobj_5bfef095a31bacf75a93852953fa2e59 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[168], mod_consts[182], NULL, 0, 0, 0);
    codeobj_8fcaec3c550f93c1a6bfd94b5ef4656a = MAKE_CODEOBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[183], NULL, 2, 0, 0);
    codeobj_e1f30226d3f0d982844f6f505566a776 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[184], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__1_setupUi();


static PyObject *MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__2_retranslateUi();


// The module function definitions.
static PyObject *impl_dirview$ui$Ui_dirview$$$function__1_setupUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_Dir_view_window = python_pars[1];
    PyObject *var_spacerItem = NULL;
    PyObject *var_spacerItem1 = NULL;
    PyObject *var_spacerItem2 = NULL;
    PyObject *var_font = NULL;
    PyObject *var_spacerItem3 = NULL;
    struct Nuitka_FrameObject *frame_e1f30226d3f0d982844f6f505566a776;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e1f30226d3f0d982844f6f505566a776 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e1f30226d3f0d982844f6f505566a776)) {
        Py_XDECREF(cache_frame_e1f30226d3f0d982844f6f505566a776);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1f30226d3f0d982844f6f505566a776 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1f30226d3f0d982844f6f505566a776 = MAKE_FUNCTION_FRAME(codeobj_e1f30226d3f0d982844f6f505566a776, module_dirview$ui$Ui_dirview, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e1f30226d3f0d982844f6f505566a776->m_type_description == NULL);
    frame_e1f30226d3f0d982844f6f505566a776 = cache_frame_e1f30226d3f0d982844f6f505566a776;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e1f30226d3f0d982844f6f505566a776);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e1f30226d3f0d982844f6f505566a776) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_Dir_view_window);
        tmp_called_instance_1 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_Dir_view_window);
        tmp_called_instance_2 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 18;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[2],
            &PyTuple_GET_ITEM(mod_consts[3], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_Dir_view_window);
        tmp_called_instance_3 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 19;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Dir_view_window);
        tmp_args_element_value_1 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 20;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[7], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 21;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Dir_view_window);
        tmp_args_element_value_2 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 22;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[10], tmp_args_element_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 23;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 24;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[13]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 25;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_8,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 26;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 27;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 28;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[7]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 29;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[19], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 30;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_11,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 31;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_assattr_target_6;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 32;
        tmp_assattr_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[21]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[22], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[22]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[23]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[24]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[25]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 33;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[22]);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 34;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        Py_DECREF(tmp_called_instance_14);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[28];
        tmp_args_element_value_8 = mod_consts[29];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[30]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[30]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[32]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem == NULL);
        var_spacerItem = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[22]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem);
        tmp_args_element_value_11 = var_spacerItem;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 36;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[33], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[34]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[17]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 37;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[35], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[35]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[36]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 38;
        tmp_args_element_value_13 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_16,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 38;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[35]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[40]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 39;
        tmp_args_element_value_14 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_17,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 39;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[35]);
        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 40;
        tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        Py_DECREF(tmp_called_instance_18);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[22]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[42]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[35]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 41;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[27]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[28];
        tmp_args_element_value_17 = mod_consts[29];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[30]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[31]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[30]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[32]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem1 == NULL);
        var_spacerItem1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[22]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem1);
        tmp_args_element_value_20 = var_spacerItem1;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 43;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[33], tmp_args_element_value_20);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[34]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[17]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 44;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[43], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[43]);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[36]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 45;
        tmp_args_element_value_22 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_20,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 45;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(par_self);
        tmp_expression_value_46 = par_self;
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[43]);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[40]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 46;
        tmp_args_element_value_23 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_21,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 46;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_48 = par_self;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[43]);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[46]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[47]);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[48]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 47;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(par_self);
        tmp_expression_value_52 = par_self;
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[43]);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[49]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[47]);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[50]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 48;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_55 = par_self;
        tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[43]);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 49;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_22);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(par_self);
        tmp_expression_value_57 = par_self;
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[22]);
        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[42]);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_58 = par_self;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[43]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 50;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[27]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = mod_consts[28];
        tmp_args_element_value_28 = mod_consts[29];
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[30]);
        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[31]);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[30]);
        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[32]);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem2 == NULL);
        var_spacerItem2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(par_self);
        tmp_expression_value_64 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[22]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem2);
        tmp_args_element_value_31 = var_spacerItem2;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 52;
        tmp_call_result_25 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[33], tmp_args_element_value_31);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[52]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_66 = par_self;
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[17]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 53;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[53], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_68 = par_self;
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[53]);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[36]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 54;
        tmp_args_element_value_33 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_24,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 54;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_instance_25;
        CHECK_OBJECT(par_self);
        tmp_expression_value_70 = par_self;
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[53]);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[40]);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 55;
        tmp_args_element_value_34 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_25,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 55;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_26;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 56;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[55]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font == NULL);
        var_font = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(var_font);
        tmp_called_instance_27 = var_font;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 57;
        tmp_call_result_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_27,
            mod_consts[56],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(var_font);
        tmp_called_instance_28 = var_font;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 58;
        tmp_call_result_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_28,
            mod_consts[58],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(var_font);
        tmp_called_instance_29 = var_font;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 59;
        tmp_call_result_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_29,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_31;
        CHECK_OBJECT(var_font);
        tmp_called_instance_30 = var_font;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 60;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_30,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(var_font);
        tmp_expression_value_71 = var_font;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[64]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[55]);
        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[65]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 61;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(par_self);
        tmp_expression_value_74 = par_self;
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[53]);
        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_36 = var_font;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 62;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[66], tmp_args_element_value_36);
        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(par_self);
        tmp_expression_value_75 = par_self;
        tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[53]);
        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 63;
        tmp_call_result_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_32,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        Py_DECREF(tmp_called_instance_32);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(par_self);
        tmp_expression_value_76 = par_self;
        tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[53]);
        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 64;
        tmp_call_result_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_33,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_33);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(par_self);
        tmp_expression_value_78 = par_self;
        tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[22]);
        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[42]);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_79 = par_self;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[53]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 65;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[52]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_81 = par_self;
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[17]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 66;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[68], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_instance_34;
        CHECK_OBJECT(par_self);
        tmp_expression_value_83 = par_self;
        tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[68]);
        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[36]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 67;
        tmp_args_element_value_39 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_34,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 67;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_instance_35;
        CHECK_OBJECT(par_self);
        tmp_expression_value_85 = par_self;
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[68]);
        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[40]);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 68;
        tmp_args_element_value_40 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_35,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 68;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(par_self);
        tmp_expression_value_86 = par_self;
        tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[68]);
        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 69;
        tmp_call_result_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_36,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_36);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(par_self);
        tmp_expression_value_88 = par_self;
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[22]);
        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[42]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_89 = par_self;
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[68]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 70;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[52]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_91 = par_self;
        tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[17]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 71;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[70], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_instance_37;
        CHECK_OBJECT(par_self);
        tmp_expression_value_93 = par_self;
        tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[70]);
        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[36]);
        Py_DECREF(tmp_expression_value_92);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 72;
        tmp_args_element_value_43 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_37,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 72;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_instance_38;
        CHECK_OBJECT(par_self);
        tmp_expression_value_95 = par_self;
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[70]);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[40]);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 73;
        tmp_args_element_value_44 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_38,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 73;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(par_self);
        tmp_expression_value_96 = par_self;
        tmp_called_instance_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[70]);
        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 74;
        tmp_call_result_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        Py_DECREF(tmp_called_instance_39);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_99;
        CHECK_OBJECT(par_self);
        tmp_expression_value_98 = par_self;
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[22]);
        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[42]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_99 = par_self;
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[70]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 75;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_expression_value_104;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[27]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[29];
        tmp_args_element_value_47 = mod_consts[29];
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[30]);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[31]);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[30]);
        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[32]);
        Py_DECREF(tmp_expression_value_103);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem3 == NULL);
        var_spacerItem3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_105 = par_self;
        tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[22]);
        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem3);
        tmp_args_element_value_50 = var_spacerItem3;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 77;
        tmp_call_result_45 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[33], tmp_args_element_value_50);
        Py_DECREF(tmp_called_instance_40);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(par_self);
        tmp_expression_value_106 = par_self;
        tmp_called_instance_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[22]);
        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 78;
        tmp_call_result_46 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_41,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_41);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(par_self);
        tmp_expression_value_107 = par_self;
        tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[22]);
        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 79;
        tmp_call_result_47 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_42,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        Py_DECREF(tmp_called_instance_42);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_48;
        CHECK_OBJECT(par_self);
        tmp_expression_value_108 = par_self;
        tmp_called_instance_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[22]);
        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 80;
        tmp_call_result_48 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_43,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        Py_DECREF(tmp_called_instance_43);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(par_self);
        tmp_expression_value_109 = par_self;
        tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[22]);
        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 81;
        tmp_call_result_49 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_44,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_110 = par_self;
        tmp_called_instance_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[22]);
        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 82;
        tmp_call_result_50 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_45,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        Py_DECREF(tmp_called_instance_45);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(par_self);
        tmp_expression_value_111 = par_self;
        tmp_called_instance_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[22]);
        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 83;
        tmp_call_result_51 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_46,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        Py_DECREF(tmp_called_instance_46);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(par_self);
        tmp_expression_value_112 = par_self;
        tmp_called_instance_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[22]);
        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 84;
        tmp_call_result_52 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_47,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        Py_DECREF(tmp_called_instance_47);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_instance_48;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(par_self);
        tmp_expression_value_113 = par_self;
        tmp_called_instance_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[22]);
        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 85;
        tmp_call_result_53 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_48,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        Py_DECREF(tmp_called_instance_48);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(par_self);
        tmp_expression_value_114 = par_self;
        tmp_called_instance_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[22]);
        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 86;
        tmp_call_result_54 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_49,
            mod_consts[72],
            &PyTuple_GET_ITEM(mod_consts[81], 0)
        );

        Py_DECREF(tmp_called_instance_49);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_117;
        CHECK_OBJECT(par_self);
        tmp_expression_value_116 = par_self;
        tmp_expression_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[19]);
        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[82]);
        Py_DECREF(tmp_expression_value_115);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_117 = par_self;
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[22]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 87;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(par_self);
        tmp_expression_value_119 = par_self;
        tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[13]);
        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[42]);
        Py_DECREF(tmp_expression_value_118);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_120 = par_self;
        tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[17]);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 88;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[10]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_122 = par_self;
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[11]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 89;
        tmp_assattr_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[83], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(par_self);
        tmp_expression_value_123 = par_self;
        tmp_called_instance_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[83]);
        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 90;
        tmp_call_result_57 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_50,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        Py_DECREF(tmp_called_instance_50);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[7]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_125 = par_self;
        tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[83]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 91;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[85], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_51;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(par_self);
        tmp_expression_value_126 = par_self;
        tmp_called_instance_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[85]);
        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 92;
        tmp_call_result_58 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_51,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[86], 0)
        );

        Py_DECREF(tmp_called_instance_51);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(par_self);
        tmp_expression_value_127 = par_self;
        tmp_called_instance_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[85]);
        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 93;
        tmp_call_result_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_52,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        Py_DECREF(tmp_called_instance_52);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_assattr_target_14;
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 94;
        tmp_assattr_value_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_53, mod_consts[88]);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[89], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_54;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_60;
        CHECK_OBJECT(par_self);
        tmp_expression_value_128 = par_self;
        tmp_called_instance_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[89]);
        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 95;
        tmp_call_result_60 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_54,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        Py_DECREF(tmp_called_instance_54);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[34]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_130 = par_self;
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[83]);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 96;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[91], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(par_self);
        tmp_expression_value_132 = par_self;
        tmp_expression_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[91]);
        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[46]);
        Py_DECREF(tmp_expression_value_131);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[47]);
        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[48]);
        Py_DECREF(tmp_expression_value_133);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 97;
        tmp_call_result_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(par_self);
        tmp_expression_value_135 = par_self;
        tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[91]);
        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 98;
        tmp_call_result_62 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_55,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[92], 0)
        );

        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        CHECK_OBJECT(par_self);
        tmp_expression_value_137 = par_self;
        tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[89]);
        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[42]);
        Py_DECREF(tmp_expression_value_136);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_138 = par_self;
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[91]);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[93];
        tmp_args_element_value_59 = mod_consts[93];
        tmp_args_element_value_60 = mod_consts[94];
        tmp_args_element_value_61 = mod_consts[94];
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_assattr_target_16;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[95]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_140 = par_self;
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[83]);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 100;
        tmp_assattr_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[96], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_56;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(par_self);
        tmp_expression_value_141 = par_self;
        tmp_called_instance_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[96]);
        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 101;
        tmp_call_result_64 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_56,
            mod_consts[97],
            &PyTuple_GET_ITEM(mod_consts[98], 0)
        );

        Py_DECREF(tmp_called_instance_56);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_57;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(par_self);
        tmp_expression_value_142 = par_self;
        tmp_called_instance_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[96]);
        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 102;
        tmp_call_result_65 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_57,
            mod_consts[99],
            PyTuple_GET_ITEM(mod_consts[100], 0)
        );

        Py_DECREF(tmp_called_instance_57);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_call_result_66;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(par_self);
        tmp_expression_value_144 = par_self;
        tmp_expression_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[96]);
        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[101]);
        Py_DECREF(tmp_expression_value_143);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[47]);
        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[102]);
        Py_DECREF(tmp_expression_value_145);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 103;
        tmp_call_result_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(par_self);
        tmp_expression_value_147 = par_self;
        tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[96]);
        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 104;
        tmp_call_result_67 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_58,
            mod_consts[103],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_expression_value_151;
        CHECK_OBJECT(par_self);
        tmp_expression_value_149 = par_self;
        tmp_expression_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[96]);
        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[104]);
        Py_DECREF(tmp_expression_value_148);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[95]);
        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[105]);
        Py_DECREF(tmp_expression_value_150);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 105;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_instance_59;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(par_self);
        tmp_expression_value_152 = par_self;
        tmp_called_instance_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[96]);
        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 106;
        tmp_call_result_69 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_59,
            mod_consts[106],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        Py_DECREF(tmp_called_instance_59);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_instance_60;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(par_self);
        tmp_expression_value_153 = par_self;
        tmp_called_instance_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[96]);
        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 107;
        tmp_call_result_70 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_60,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        Py_DECREF(tmp_called_instance_60);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        CHECK_OBJECT(par_self);
        tmp_expression_value_155 = par_self;
        tmp_expression_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[89]);
        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[42]);
        Py_DECREF(tmp_expression_value_154);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_156 = par_self;
        tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[96]);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[93];
        tmp_args_element_value_67 = mod_consts[109];
        tmp_args_element_value_68 = mod_consts[94];
        tmp_args_element_value_69 = mod_consts[94];
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[34]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_158 = par_self;
        tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[83]);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 109;
        tmp_assattr_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[110], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_61;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(par_self);
        tmp_expression_value_159 = par_self;
        tmp_called_instance_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[110]);
        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 110;
        tmp_call_result_72 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_61,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        Py_DECREF(tmp_called_instance_61);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        CHECK_OBJECT(par_self);
        tmp_expression_value_161 = par_self;
        tmp_expression_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[89]);
        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[42]);
        Py_DECREF(tmp_expression_value_160);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_162 = par_self;
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[110]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[93];
        tmp_args_element_value_73 = mod_consts[112];
        tmp_args_element_value_74 = mod_consts[94];
        tmp_args_element_value_75 = mod_consts[94];
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_assattr_target_18;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[52]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_164 = par_self;
        tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[83]);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 112;
        tmp_assattr_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[113], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_62;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(par_self);
        tmp_expression_value_165 = par_self;
        tmp_called_instance_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[113]);
        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 113;
        tmp_call_result_74 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_62,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[114], 0)
        );

        Py_DECREF(tmp_called_instance_62);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        CHECK_OBJECT(par_self);
        tmp_expression_value_167 = par_self;
        tmp_expression_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[89]);
        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[42]);
        Py_DECREF(tmp_expression_value_166);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_168 = par_self;
        tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[113]);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[93];
        tmp_args_element_value_79 = mod_consts[115];
        tmp_args_element_value_80 = mod_consts[94];
        tmp_args_element_value_81 = mod_consts[94];
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_46, call_args);
        }

        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_assattr_target_19;
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[116]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_170 = par_self;
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[83]);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 115;
        tmp_assattr_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[117], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_instance_63;
        CHECK_OBJECT(par_self);
        tmp_expression_value_172 = par_self;
        tmp_expression_value_171 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[117]);
        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[40]);
        Py_DECREF(tmp_expression_value_171);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_63 == NULL)) {
            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 116;
        tmp_args_element_value_83 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_63,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[118], 0)
        );

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 116;
        tmp_call_result_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_83);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_instance_64;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_77;
        CHECK_OBJECT(par_self);
        tmp_expression_value_173 = par_self;
        tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[117]);
        if (tmp_called_instance_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 117;
        tmp_call_result_77 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_64,
            mod_consts[119],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        Py_DECREF(tmp_called_instance_64);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_instance_65;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_78;
        CHECK_OBJECT(par_self);
        tmp_expression_value_174 = par_self;
        tmp_called_instance_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[117]);
        if (tmp_called_instance_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 118;
        tmp_call_result_78 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_65,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[120], 0)
        );

        Py_DECREF(tmp_called_instance_65);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        CHECK_OBJECT(par_self);
        tmp_expression_value_176 = par_self;
        tmp_expression_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[89]);
        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[42]);
        Py_DECREF(tmp_expression_value_175);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_177 = par_self;
        tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[117]);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[93];
        tmp_args_element_value_86 = mod_consts[94];
        tmp_args_element_value_87 = mod_consts[94];
        tmp_args_element_value_88 = mod_consts[94];
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_180;
        CHECK_OBJECT(par_self);
        tmp_expression_value_179 = par_self;
        tmp_expression_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[85]);
        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[82]);
        Py_DECREF(tmp_expression_value_178);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_180 = par_self;
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[89]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 120;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 120;
        tmp_call_result_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_assattr_target_20;
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[121]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_182 = par_self;
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[83]);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 121;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 121;
        tmp_assattr_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assattr_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[122], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_called_instance_66;
        CHECK_OBJECT(par_self);
        tmp_expression_value_184 = par_self;
        tmp_expression_value_183 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[122]);
        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[36]);
        Py_DECREF(tmp_expression_value_183);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_66 == NULL)) {
            tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 122;
        tmp_args_element_value_91 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_66,
            mod_consts[38],
            &PyTuple_GET_ITEM(mod_consts[123], 0)
        );

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 122;
        tmp_call_result_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_instance_67;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(par_self);
        tmp_expression_value_185 = par_self;
        tmp_called_instance_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[122]);
        if (tmp_called_instance_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 123;
        tmp_call_result_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_67,
            mod_consts[124],
            PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        Py_DECREF(tmp_called_instance_67);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_call_result_83;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        CHECK_OBJECT(par_self);
        tmp_expression_value_187 = par_self;
        tmp_expression_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[122]);
        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[126]);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[121]);
        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[127]);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 124;
        tmp_call_result_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        CHECK_OBJECT(par_self);
        tmp_expression_value_191 = par_self;
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[122]);
        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[128]);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[121]);
        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[129]);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 125;
        tmp_call_result_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_instance_68;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(par_self);
        tmp_expression_value_194 = par_self;
        tmp_called_instance_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[122]);
        if (tmp_called_instance_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 126;
        tmp_call_result_85 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_68,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[130], 0)
        );

        Py_DECREF(tmp_called_instance_68);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_expression_value_197;
        CHECK_OBJECT(par_self);
        tmp_expression_value_196 = par_self;
        tmp_expression_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[85]);
        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[42]);
        Py_DECREF(tmp_expression_value_195);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_197 = par_self;
        tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[122]);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 127;
        tmp_call_result_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_assattr_target_21;
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[131]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_199 = par_self;
        tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[83]);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 128;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[132], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_69;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(par_self);
        tmp_expression_value_200 = par_self;
        tmp_called_instance_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[132]);
        if (tmp_called_instance_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 129;
        tmp_call_result_87 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_69,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[133], 0)
        );

        Py_DECREF(tmp_called_instance_69);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_instance_70;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(par_self);
        tmp_expression_value_201 = par_self;
        tmp_called_instance_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[132]);
        if (tmp_called_instance_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 159;
        tmp_call_result_88 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_70,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        Py_DECREF(tmp_called_instance_70);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_204;
        CHECK_OBJECT(par_self);
        tmp_expression_value_203 = par_self;
        tmp_expression_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[85]);
        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[42]);
        Py_DECREF(tmp_expression_value_202);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_204 = par_self;
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[132]);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 160;
        tmp_call_result_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_207;
        CHECK_OBJECT(par_self);
        tmp_expression_value_206 = par_self;
        tmp_expression_value_205 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[13]);
        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[42]);
        Py_DECREF(tmp_expression_value_205);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_207 = par_self;
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[83]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 161;
        tmp_call_result_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_call_result_91;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_210;
        CHECK_OBJECT(par_self);
        tmp_expression_value_209 = par_self;
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[8]);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[42]);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_210 = par_self;
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[11]);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 162;
        tmp_call_result_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_instance_71;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_value_99;
        CHECK_OBJECT(par_self);
        tmp_called_instance_71 = par_self;
        CHECK_OBJECT(par_Dir_view_window);
        tmp_args_element_value_99 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 164;
        tmp_call_result_92 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_71, mod_consts[135], tmp_args_element_value_99);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_instance_72;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_call_result_93;
        PyObject *tmp_args_element_value_100;
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[136]);
        if (tmp_called_instance_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Dir_view_window);
        tmp_args_element_value_100 = par_Dir_view_window;
        frame_e1f30226d3f0d982844f6f505566a776->m_frame.f_lineno = 165;
        tmp_call_result_93 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_72, mod_consts[137], tmp_args_element_value_100);
        Py_DECREF(tmp_called_instance_72);
        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1f30226d3f0d982844f6f505566a776);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1f30226d3f0d982844f6f505566a776);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1f30226d3f0d982844f6f505566a776, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1f30226d3f0d982844f6f505566a776->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1f30226d3f0d982844f6f505566a776, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1f30226d3f0d982844f6f505566a776,
        type_description_1,
        par_self,
        par_Dir_view_window,
        var_spacerItem,
        var_spacerItem1,
        var_spacerItem2,
        var_font,
        var_spacerItem3
    );


    // Release cached frame if used for exception.
    if (frame_e1f30226d3f0d982844f6f505566a776 == cache_frame_e1f30226d3f0d982844f6f505566a776) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e1f30226d3f0d982844f6f505566a776);
        cache_frame_e1f30226d3f0d982844f6f505566a776 = NULL;
    }

    assertFrameObject(frame_e1f30226d3f0d982844f6f505566a776);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_spacerItem);
    Py_DECREF(var_spacerItem);
    var_spacerItem = NULL;
    CHECK_OBJECT(var_spacerItem1);
    Py_DECREF(var_spacerItem1);
    var_spacerItem1 = NULL;
    CHECK_OBJECT(var_spacerItem2);
    Py_DECREF(var_spacerItem2);
    var_spacerItem2 = NULL;
    CHECK_OBJECT(var_font);
    Py_DECREF(var_font);
    var_font = NULL;
    CHECK_OBJECT(var_spacerItem3);
    Py_DECREF(var_spacerItem3);
    var_spacerItem3 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_spacerItem);
    var_spacerItem = NULL;
    Py_XDECREF(var_spacerItem1);
    var_spacerItem1 = NULL;
    Py_XDECREF(var_spacerItem2);
    var_spacerItem2 = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_spacerItem3);
    var_spacerItem3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_Dir_view_window);
    Py_DECREF(par_Dir_view_window);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_Dir_view_window);
    Py_DECREF(par_Dir_view_window);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dirview$ui$Ui_dirview$$$function__2_retranslateUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_Dir_view_window = python_pars[1];
    PyObject *var__translate = NULL;
    struct Nuitka_FrameObject *frame_8fcaec3c550f93c1a6bfd94b5ef4656a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a)) {
        Py_XDECREF(cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a = MAKE_FUNCTION_FRAME(codeobj_8fcaec3c550f93c1a6bfd94b5ef4656a, module_dirview$ui$Ui_dirview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_type_description == NULL);
    frame_8fcaec3c550f93c1a6bfd94b5ef4656a = cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8fcaec3c550f93c1a6bfd94b5ef4656a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8fcaec3c550f93c1a6bfd94b5ef4656a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[138]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[139]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var__translate == NULL);
        var__translate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_Dir_view_window);
        tmp_expression_value_3 = par_Dir_view_window;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_2 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 169;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[141]);

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 169;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[119]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_4 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 170;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[142]);

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 170;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[43]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[119]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_6 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 171;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[143]);

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 171;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[53]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[144]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_8 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 172;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[145]);

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 172;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[53]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[119]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_10 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 173;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[146]);

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 173;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[68]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[144]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_12 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 174;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[147]);

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 174;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[68]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[119]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_14 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 175;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[148]);

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 175;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[70]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[144]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_16 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 176;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[149]);

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 176;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[70]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[119]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_18 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 177;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[150]);

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 177;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[91]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[119]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_20 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 178;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[151]);

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 178;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[110]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[119]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_22 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 179;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[152]);

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 179;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[113]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[119]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_24 = var__translate;
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 180;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[153]);

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame.f_lineno = 180;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fcaec3c550f93c1a6bfd94b5ef4656a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fcaec3c550f93c1a6bfd94b5ef4656a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fcaec3c550f93c1a6bfd94b5ef4656a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fcaec3c550f93c1a6bfd94b5ef4656a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fcaec3c550f93c1a6bfd94b5ef4656a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fcaec3c550f93c1a6bfd94b5ef4656a,
        type_description_1,
        par_self,
        par_Dir_view_window,
        var__translate
    );


    // Release cached frame if used for exception.
    if (frame_8fcaec3c550f93c1a6bfd94b5ef4656a == cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a);
        cache_frame_8fcaec3c550f93c1a6bfd94b5ef4656a = NULL;
    }

    assertFrameObject(frame_8fcaec3c550f93c1a6bfd94b5ef4656a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__translate);
    Py_DECREF(var__translate);
    var__translate = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__translate);
    var__translate = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_Dir_view_window);
    Py_DECREF(par_Dir_view_window);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_Dir_view_window);
    Py_DECREF(par_Dir_view_window);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dirview$ui$Ui_dirview$$$function__1_setupUi,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_e1f30226d3f0d982844f6f505566a776,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dirview$ui$Ui_dirview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dirview$ui$Ui_dirview$$$function__2_retranslateUi,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_8fcaec3c550f93c1a6bfd94b5ef4656a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dirview$ui$Ui_dirview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_dirview$ui$Ui_dirview[] = {
    impl_dirview$ui$Ui_dirview$$$function__1_setupUi,
    impl_dirview$ui$Ui_dirview$$$function__2_retranslateUi,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_dirview$ui$Ui_dirview;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_dirview$ui$Ui_dirview) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_dirview$ui$Ui_dirview[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_dirview$ui$Ui_dirview,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dirview$ui$Ui_dirview(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dirview.ui.Ui_dirview");

    // Store the module for future use.
    module_dirview$ui$Ui_dirview = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("dirview.ui.Ui_dirview: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("dirview.ui.Ui_dirview: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("dirview.ui.Ui_dirview: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirview$ui$Ui_dirview\n");

    moduledict_dirview$ui$Ui_dirview = MODULE_DICT(module_dirview$ui$Ui_dirview);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dirview$ui$Ui_dirview,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dirview$ui$Ui_dirview,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[185]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dirview$ui$Ui_dirview,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dirview$ui$Ui_dirview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dirview$ui$Ui_dirview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dirview$ui$Ui_dirview);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dirview$ui$Ui_dirview);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ac559644d6135bd8e01bfc36e47e0a9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5bfef095a31bacf75a93852953fa2e59_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5bfef095a31bacf75a93852953fa2e59_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ac559644d6135bd8e01bfc36e47e0a9e = MAKE_MODULE_FRAME(codeobj_ac559644d6135bd8e01bfc36e47e0a9e, module_dirview$ui$Ui_dirview);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ac559644d6135bd8e01bfc36e47e0a9e);
    assert(Py_REFCNT(frame_ac559644d6135bd8e01bfc36e47e0a9e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[157], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[158], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[160];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_dirview$ui$Ui_dirview;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[161];
        tmp_level_value_1 = mod_consts[93];
        frame_ac559644d6135bd8e01bfc36e47e0a9e->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dirview$ui$Ui_dirview,
                mod_consts[37],
                mod_consts[93]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[37]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dirview$ui$Ui_dirview,
                mod_consts[54],
                mod_consts[93]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[54]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dirview$ui$Ui_dirview,
                mod_consts[6],
                mod_consts[93]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[6]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[162];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_dirview$ui$Ui_dirview;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[163];
        tmp_level_value_2 = mod_consts[93];
        frame_ac559644d6135bd8e01bfc36e47e0a9e->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dirview$ui$Ui_dirview,
                mod_consts[164],
                mod_consts[93]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[164]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[165];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_9 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[166];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[93];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_11 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[166];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[167]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[167]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[168];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ac559644d6135bd8e01bfc36e47e0a9e->m_frame.f_lineno = 15;
        tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[169]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[171];
        tmp_getattr_default_1 = mod_consts[172];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[171]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_5bfef095a31bacf75a93852953fa2e59_2)) {
            Py_XDECREF(cache_frame_5bfef095a31bacf75a93852953fa2e59_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5bfef095a31bacf75a93852953fa2e59_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5bfef095a31bacf75a93852953fa2e59_2 = MAKE_FUNCTION_FRAME(codeobj_5bfef095a31bacf75a93852953fa2e59, module_dirview$ui$Ui_dirview, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5bfef095a31bacf75a93852953fa2e59_2->m_type_description == NULL);
        frame_5bfef095a31bacf75a93852953fa2e59_2 = cache_frame_5bfef095a31bacf75a93852953fa2e59_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5bfef095a31bacf75a93852953fa2e59_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5bfef095a31bacf75a93852953fa2e59_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__1_setupUi();

        tmp_res = PyObject_SetItem(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dirview$ui$Ui_dirview$$$function__2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5bfef095a31bacf75a93852953fa2e59_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5bfef095a31bacf75a93852953fa2e59_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5bfef095a31bacf75a93852953fa2e59_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5bfef095a31bacf75a93852953fa2e59_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5bfef095a31bacf75a93852953fa2e59_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5bfef095a31bacf75a93852953fa2e59_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5bfef095a31bacf75a93852953fa2e59_2 == cache_frame_5bfef095a31bacf75a93852953fa2e59_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5bfef095a31bacf75a93852953fa2e59_2);
            cache_frame_5bfef095a31bacf75a93852953fa2e59_2 = NULL;
        }

        assertFrameObject(frame_5bfef095a31bacf75a93852953fa2e59_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[165];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15, mod_consts[179], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[168];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ac559644d6135bd8e01bfc36e47e0a9e->m_frame.f_lineno = 15;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15);
        locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15);
        locals_dirview$ui$Ui_dirview$$$class__1_Ui_Dir_view_window_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac559644d6135bd8e01bfc36e47e0a9e);
#endif
    popFrameStack();

    assertFrameObject(frame_ac559644d6135bd8e01bfc36e47e0a9e);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac559644d6135bd8e01bfc36e47e0a9e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac559644d6135bd8e01bfc36e47e0a9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac559644d6135bd8e01bfc36e47e0a9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac559644d6135bd8e01bfc36e47e0a9e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dirview.ui.Ui_dirview", false);

    return module_dirview$ui$Ui_dirview;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dirview$ui$Ui_dirview, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("dirview$ui$Ui_dirview", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
