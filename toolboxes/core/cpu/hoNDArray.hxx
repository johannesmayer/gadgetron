// This file is not to be included by anyone else than hoNDArray.h
// Contains the "private" implementation of the container
//
#include "vector_td_utilities.h"
#include "Types.hpp"
namespace Gadgetron {
    template <typename T> hoNDArray<T>::hoNDArray() : NDArray<T>::NDArray() {}

    template <typename T> hoNDArray<T>::hoNDArray(const std::vector<size_t>* dimensions) : NDArray<T>::NDArray() {
        this->create(dimensions);
    }

    template <typename T> hoNDArray<T>::hoNDArray(const std::vector<size_t>& dimensions) : NDArray<T>::NDArray() {
        this->create(dimensions);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(boost::shared_ptr<std::vector<size_t>> dimensions) : NDArray<T>::NDArray() {
        this->create(dimensions);
    }

    template <class T> hoNDArray<T>::hoNDArray(std::initializer_list<size_t> dimensions) {
        this->create(dimensions);
    }
    template <class T>
    hoNDArray<T>::hoNDArray(std::initializer_list<size_t> dimensions, T* data, bool delete_data_on_destruct) {
        this->create(dimensions, data, delete_data_on_destruct);
    }
    template <typename T> hoNDArray<T>::hoNDArray(size_t len) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(1);
        dim[0] = len;
        this->create(dim);
    }

    template <typename T> hoNDArray<T>::hoNDArray(size_t sx, size_t sy) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(2);
        dim[0] = sx;
        dim[1] = sy;
        this->create(dim);
    }

    template <typename T> hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(3);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        this->create(dim);
    }

    template <typename T> hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(4);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        this->create(dim);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(5);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        this->create(dim);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(6);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        this->create(dim);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(7);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        this->create(dim);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr, size_t ss)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(8);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        this->create(dim);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(const std::vector<size_t>* dimensions, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        this->create(dimensions, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(const std::vector<size_t>& dimensions, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        this->create(dimensions, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(boost::shared_ptr<std::vector<size_t>> dimensions, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        this->create(dimensions, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t len, T* data, bool delete_data_on_destruct) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(1);
        dim[0] = len;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, T* data, bool delete_data_on_destruct) : NDArray<T>::NDArray() {
        std::vector<size_t> dim(2);
        dim[0] = sx;
        dim[1] = sy;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(3);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(4);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(5);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(6);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr, T* data,
        bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(7);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    hoNDArray<T>::hoNDArray(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr, size_t ss,
        T* data, bool delete_data_on_destruct)
        : NDArray<T>::NDArray() {
        std::vector<size_t> dim(8);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T> hoNDArray<T>::~hoNDArray() {
        if (this->delete_data_on_destruct_) {
            deallocate_memory();
        }
    }

    template <typename T> hoNDArray<T>::hoNDArray(const hoNDArray<T>* a) {
        if (!a)
            throw std::runtime_error("hoNDArray<T>::hoNDArray(): 0x0 pointer provided");
        this->data_ = 0;

        this->dimensions_    = a->dimensions_;
        this->offsetFactors_ = a->offsetFactors_;

        if (!this->dimensions_.empty()) {
            allocate_memory();
            memcpy(this->data_, a->data_, this->elements_ * sizeof(T));
        } else {
            this->elements_ = 0;
        }
    }

    template <typename T> hoNDArray<T>::hoNDArray(const hoNDArray<T>& a) {
        this->data_       = 0;
        this->dimensions_ = a.dimensions_;
        offsetFactors_    = a.offsetFactors_;

        if (!this->dimensions_.empty()) {
            allocate_memory();
            memcpy(this->data_, a.data_, this->elements_ * sizeof(T));
        } else {
            this->elements_ = 0;
        }
    }

#if __cplusplus > 199711L
    template <typename T> hoNDArray<T>::hoNDArray(hoNDArray<T>&& a) noexcept : NDArray<T>::NDArray() {
        data_                          = a.data_;
        this->dimensions_              = a.dimensions_;
        this->elements_                = a.elements_;
        a.data_                        = nullptr;
        this->offsetFactors_           = a.offsetFactors_;
        this->delete_data_on_destruct_ = a.delete_data_on_destruct_;
    }
#endif

    template <typename T> hoNDArray<T>& hoNDArray<T>::operator=(const hoNDArray<T>& rhs) {
        if (&rhs == this)
            return *this;

        if (rhs.get_number_of_elements() == 0) {
            this->clear();
            return *this;
        }

        // Are the dimensions the same? Then we can just memcpy
        if (this->dimensions_equal(&rhs)) {
            memcpy(this->data_, rhs.data_, this->elements_ * sizeof(T));
        } else {
            deallocate_memory();
            this->data_       = 0;
            this->dimensions_ = rhs.dimensions_;
            offsetFactors_    = rhs.offsetFactors_;
            allocate_memory();
            memcpy(this->data_, rhs.data_, this->elements_ * sizeof(T));
        }
        return *this;
    }

#if __cplusplus > 199711L
    template <typename T> hoNDArray<T>& hoNDArray<T>::operator=(hoNDArray<T>&& rhs) noexcept {
        if (&rhs == this)
            return *this;
        this->clear();
        this->dimensions_              = rhs.dimensions_;
        this->offsetFactors_           = rhs.offsetFactors_;
        this->elements_                = rhs.elements_;
        data_                          = rhs.data_;
        rhs.data_                      = nullptr;
        this->delete_data_on_destruct_ = rhs.delete_data_on_destruct_;
        return *this;
    }
#endif

    template <typename T> void hoNDArray<T>::create(const std::vector<size_t>& dimensions) {
        if (this->dimensions_equal(&dimensions)) {
            return;
        }

        this->clear();
        BaseClass::create(dimensions);
    }

    template <typename T> void hoNDArray<T>::create(const std::vector<size_t>* dimensions) {
        if (this->dimensions_equal(dimensions)) {
            return;
        }
        this->clear();
        BaseClass::create(dimensions);
    }

    template <typename T> void hoNDArray<T>::create(boost::shared_ptr<std::vector<size_t>> dimensions) {
        if (this->dimensions_equal(dimensions.get())) {
            return;
        }
        this->clear();
        BaseClass::create(dimensions);
    }

    template <typename T>
    void hoNDArray<T>::create(const std::vector<size_t>* dimensions, T* data, bool delete_data_on_destruct) {
        if (!dimensions)
            throw std::runtime_error("hoNDArray<T>::create(): 0x0 pointer provided");
        if (!data)
            throw std::runtime_error("hoNDArray<T>::create(): 0x0 pointer provided");

        if (this->dimensions_equal(dimensions)) {
            if (this->delete_data_on_destruct_) {
                this->deallocate_memory();
            }

            this->data_                    = data;
            this->delete_data_on_destruct_ = delete_data_on_destruct;
        } else {
            if (this->delete_data_on_destruct_) {
                this->deallocate_memory();
                this->data_ = NULL;
            }

            BaseClass::create(dimensions, data, delete_data_on_destruct);
        }
    }

    template <typename T>
    void hoNDArray<T>::create(const std::vector<size_t>& dimensions, T* data, bool delete_data_on_destruct) {
        if (!data)
            throw std::runtime_error("hoNDArray<T>::create(): 0x0 pointer provided");

        if (this->dimensions_equal(&dimensions)) {
            if (this->delete_data_on_destruct_) {
                this->deallocate_memory();
            }

            this->data_                    = data;
            this->delete_data_on_destruct_ = delete_data_on_destruct;
        } else {
            if (this->delete_data_on_destruct_) {
                this->deallocate_memory();
                this->data_ = NULL;
            }

            BaseClass::create(dimensions, data, delete_data_on_destruct);
        }
    }

    template <typename T>
    inline void hoNDArray<T>::create(
        boost::shared_ptr<std::vector<size_t>> dimensions, T* data, bool delete_data_on_destruct) {
        this->create(dimensions.get(), data, delete_data_on_destruct);
    }

#if __cplusplus > 199711L
    template <class T> void hoNDArray<T>::create(std::initializer_list<size_t> dimensions) {
        std::vector<size_t> dims(dimensions);
        this->create(dims);
    }
    template <class T>
    void hoNDArray<T>::create(std::initializer_list<size_t> dimensions, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dims(dimensions);
        this->create(dims, data, delete_data_on_destruct);
    }
#endif

    template <typename T> inline void hoNDArray<T>::create(size_t len) {
        std::vector<size_t> dim(1);
        dim[0] = len;
        this->create(dim);
    }

    template <typename T> inline void hoNDArray<T>::create(size_t sx, size_t sy) {
        std::vector<size_t> dim(2);
        dim[0] = sx;
        dim[1] = sy;
        this->create(dim);
    }

    template <typename T> inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz) {
        std::vector<size_t> dim(3);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        this->create(dim);
    }

    template <typename T> inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st) {
        std::vector<size_t> dim(4);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        this->create(dim);
    }

    template <typename T> inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp) {
        std::vector<size_t> dim(5);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        this->create(dim);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq) {
        std::vector<size_t> dim(6);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        this->create(dim);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr) {
        std::vector<size_t> dim(7);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        this->create(dim);
    }

    template <typename T>
    inline void hoNDArray<T>::create(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr, size_t ss) {
        std::vector<size_t> dim(8);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        this->create(dim);
    }

    template <typename T>
    inline void hoNDArray<T>::create(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr, size_t ss, size_t su) {
        std::vector<size_t> dim(9);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        dim[8] = su;
        this->create(dim);
    }

    template <typename T> inline void hoNDArray<T>::create(size_t len, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(1);
        dim[0] = len;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(2);
        dim[0] = sx;
        dim[1] = sy;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(3);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(
        size_t sx, size_t sy, size_t sz, size_t st, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(4);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        this->create(&dim, data, delete_data_on_destruct);
    }
    template <typename T>
    inline void hoNDArray<T>::create(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(5);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(
        size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(6);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr,
        T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(7);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr,
        size_t ss, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(8);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T>
    inline void hoNDArray<T>::create(size_t sx, size_t sy, size_t sz, size_t st, size_t sp, size_t sq, size_t sr,
        size_t ss, size_t su, T* data, bool delete_data_on_destruct) {
        std::vector<size_t> dim(9);
        dim[0] = sx;
        dim[1] = sy;
        dim[2] = sz;
        dim[3] = st;
        dim[4] = sp;
        dim[5] = sq;
        dim[6] = sr;
        dim[7] = ss;
        dim[8] = su;
        this->create(&dim, data, delete_data_on_destruct);
    }

    template <typename T> void hoNDArray<T>::fill(T value) {
        std::fill(this->get_data_ptr(), this->get_data_ptr() + this->get_number_of_elements(), value);
    }

    template <typename T> inline T* hoNDArray<T>::begin() {
        return this->data_;
    }

    template <typename T> inline const T* hoNDArray<T>::begin() const {
        return this->data_;
    }

    template <typename T> inline T* hoNDArray<T>::end() {
        return (this->data_ + this->elements_);
    }

    template <typename T> inline const T* hoNDArray<T>::end() const {
        return (this->data_ + this->elements_);
    }

    template <typename T> inline T& hoNDArray<T>::at(size_t idx) {
        /*if( idx >= this->get_number_of_elements() )
        {
        BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::at(): index out of range."));
        }*/
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->get_data_ptr()[idx];
    }

    template <typename T> inline const T& hoNDArray<T>::at(size_t idx) const {
        /*if( idx >= this->get_number_of_elements() )
        {
        BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::at(): index out of range."));
        }*/
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->get_data_ptr()[idx];
    }

    template <typename T> inline T& hoNDArray<T>::operator[](size_t idx) {
        /*if( idx >= this->get_number_of_elements() )
        {
        BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator[]: index out of range."));
        }*/
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->get_data_ptr()[idx];
    }
    template <typename T> inline const T& hoNDArray<T>::operator[](size_t idx) const {
        /*if( idx >= this->get_number_of_elements() )
        {
        BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator[]: index out of range."));
        }*/
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->get_data_ptr()[idx];
    }

    // template <typename T>
    // inline T& hohoNDArray<T>::operator()( size_t idx )
    //{
    //    /*if( idx >= this->get_number_of_elements() )
    //    {
    //    BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator(): index out of range."));
    //    }*/
    //    GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
    //    return this->get_data_ptr()[idx];
    //}

    // template <typename T>
    // inline const T& hohoNDArray<T>::operator()( size_t idx ) const
    //{
    //    /*if( idx >= this->get_number_of_elements() )
    //    {
    //    BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator(): index out of range."));
    //    }*/
    //    GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
    //    return this->get_data_ptr()[idx];
    //}

    // template <typename T>
    // inline T& hohoNDArray<T>::operator()( const std::vector<size_t>& ind )
    //{
    //    size_t idx = this->calculate_offset(ind);
    //    /*if( idx >= this->get_number_of_elements() )
    //    {
    //    BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator(): index out of range."));
    //    }*/
    //    GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
    //    return this->get_data_ptr()[idx];
    //}

    // template <typename T>
    // inline const T& hohoNDArray<T>::operator()( const std::vector<size_t>& ind ) const
    //{
    //    size_t idx = this->calculate_offset(ind);
    //    /*if( idx >= this->get_number_of_elements() )
    //    {
    //    BOOST_THROW_EXCEPTION( runtime_error("hoNDArray::operator(): index out of range."));
    //    }*/
    //    GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
    //    return this->get_data_ptr()[idx];
    //}

    template <typename T>
    void hoNDArray<T>::get_sub_array(
        const std::vector<size_t>& start, std::vector<size_t>& size, hoNDArray<T>& out) const {
        if (start.size() != size.size()) {
            BOOST_THROW_EXCEPTION(runtime_error("hoNDArray<>::get_sub_array failed"));
        }

        if (start.size() != dimensions_.size()) {
            BOOST_THROW_EXCEPTION(runtime_error("hoNDArray<>::get_sub_array failed"));
        }

        out.create(&size);

        if (out.get_number_of_elements() == this->get_number_of_elements()) {
            out = *this;
            return;
        }

        std::vector<size_t> end(start.size());

        size_t ii;
        for (ii = 0; ii < start.size(); ii++) {
            end[ii] = start[ii] + size[ii] - 1;
            if (end[ii] >= dimensions_[ii]) {
                BOOST_THROW_EXCEPTION(runtime_error("hoNDArray<>::get_sub_array failed"));
            }
        }

        // Since doing memcpy for a chunk of contiguous data is much faster than
        //   copying element by element, we will loop with a single index
        //   through all the dimensions except the first one and memcpy the
        //   corresponding lines of data:

        size_t dim2D = out.get_number_of_elements() / size[0];

        // loop through all the dimensions except the first one:
        for (ii = 0; ii < dim2D; ii++) {
            // (linear) index corresponding to (0, ii) if "out" were 2D
            size_t ind1D = ii * size[0];

            // the indices i,j,k,... corresponding to that ind1D
            //    (note that the first index should be 0!):
            std::vector<size_t> ind = out.calculate_index(ind1D);

            // calculate the indices in the source array corresponding
            //   to "ind" in the output array:
            for (size_t jj = 0; jj < start.size(); jj++) {
                ind[jj] += start[jj];
            }

            // now, copy size[0] elements:
            memcpy(&out.data_[ind1D], &((*this)(ind)), size[0] * sizeof(T));
        }
    }

    template <typename T> void hoNDArray<T>::printContent(std::ostream& os) const {
        using namespace std;

        os.unsetf(std::ios::scientific);
        os.setf(ios::fixed);

        size_t i;

        os << "Array dimension is : " << dimensions_.size() << endl;

        os << "Array size is : ";
        for (i = 0; i < dimensions_.size(); i++)
            os << dimensions_[i] << " ";
        os << endl;

        int elemTypeSize         = sizeof(T);
        std::string elemTypeName = std::string(typeid(T).name());

        os << "Array data type is : " << elemTypeName << std::endl;
        os << "Byte number for each element is : " << elemTypeSize << std::endl;
        os << "Number of array size in bytes is : ";
        os << elements_ * elemTypeSize << std::endl;
        os << "Delete data on destruction flag is : " << this->delete_data_on_destruct_ << endl;

        // os << "-------------------------------------------" << std::endl;
        // size_t numOfPrints = 20;
        // if ( this->elements_ < numOfPrints ) numOfPrints = this->elements_;
        // for (i=0; i<numOfPrints; i++)
        //{
        //    os << i << " = " << (*this)(i) << std::endl;
        //}
        // os << "-------------------------------------------" << std::endl;

        os << std::endl;
    }

    template <typename T> void hoNDArray<T>::print(std::ostream& os) const {
        using namespace std;

        os.unsetf(std::ios::scientific);
        os.setf(ios::fixed);

        os << "--------------Gagdgetron ND Array -------------" << endl;
        this->printContent(os);
    }

    template <typename T> void hoNDArray<T>::allocate_memory() {
        deallocate_memory();

        if (!this->dimensions_.empty()) {
            this->elements_ = this->dimensions_[0];
            for (size_t i = 1; i < this->dimensions_.size(); i++) {
                this->elements_ *= this->dimensions_[i];
            }

            if (this->elements_ > 0) {
                this->_allocate_memory(this->elements_, &this->data_);

                if (this->data_ == 0x0) {
                    BOOST_THROW_EXCEPTION(bad_alloc("hoNDArray<>::allocate memory failed"));
                }

                this->delete_data_on_destruct_ = true;

                // memset(this->data_, 0, sizeof(T)*this->elements_);
            }
        } else {
            this->elements_ = 0;
        }
    }

    template <typename T> void hoNDArray<T>::deallocate_memory() {
        if (!(this->delete_data_on_destruct_)) {
            throw std::runtime_error("You don't own this data.  You cannot deallocate its memory.");
        }

        if (this->data_) {
            this->_deallocate_memory(this->data_);
            this->data_ = 0x0;
        }
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, float** data) {
        *data = (float*)malloc(size * sizeof(float));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(float* data) {
        free(data);
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, double** data) {
        *data = (double*)malloc(size * sizeof(double));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(double* data) {
        free(data);
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, std::complex<float>** data) {
        *data = (std::complex<float>*)malloc(size * sizeof(std::complex<float>));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(std::complex<float>* data) {
        free(data);
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, std::complex<double>** data) {
        *data = (std::complex<double>*)malloc(size * sizeof(std::complex<double>));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(std::complex<double>* data) {
        free(data);
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, float_complext** data) {
        *data = (float_complext*)malloc(size * sizeof(float_complext));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(float_complext* data) {
        free(data);
    }

    template <typename T> inline void hoNDArray<T>::_allocate_memory(size_t size, double_complext** data) {
        *data = (double_complext*)malloc(size * sizeof(double_complext));
    }

    template <typename T> inline void hoNDArray<T>::_deallocate_memory(double_complext* data) {
        free(data);
    }

    template <typename T> bool hoNDArray<T>::serialize(char*& buf, size_t& len) const {
        if (buf != NULL)
            delete[] buf;

        size_t NDim = dimensions_.size();

        // number of dimensions + dimension vector + contents
        len = sizeof(size_t) + sizeof(size_t) * NDim + sizeof(T) * elements_;

        buf = new char[len];

        memcpy(buf, &NDim, sizeof(size_t));
        if (NDim > 0) {
            memcpy(buf + sizeof(size_t), &(dimensions_[0]), sizeof(size_t) * NDim);
            memcpy(buf + sizeof(size_t) + sizeof(size_t) * NDim, this->data_, sizeof(T) * elements_);
        }

        return true; // Temporary. Should not be a boolean function.
    }

    template <typename T> bool hoNDArray<T>::deserialize(char* buf, size_t& len) {
        size_t NDim;
        memcpy(&NDim, buf, sizeof(size_t));

        if (NDim > 0) {
            std::vector<size_t> dimensions(NDim);
            memcpy(&dimensions[0], buf + sizeof(size_t), sizeof(size_t) * NDim);

            // allocate memory
            this->create(&dimensions);

            // copy the content
            memcpy(this->data_, buf + sizeof(size_t) + sizeof(size_t) * NDim, sizeof(T) * elements_);
        } else {
            this->clear();
        }

        len = sizeof(size_t) + sizeof(size_t) * NDim + sizeof(T) * elements_;
        return true; // Temporary. Should not be a boolean function.
    }

    template <typename T> bool hoNDArray<T>::operator==(const hoNDArray& rhs) const {
        auto result = this->dimensions_equal(rhs.dimensions());
        if (!result)
            return false;
        for (size_t i = 0; i < this->size(); i++)
            result &= this->data_[i] == rhs[i];
        return result;
    }

    template <typename T> inline T& hoNDArray<T>::operator()(const std::vector<size_t>& ind) {
        size_t idx = this->calculate_offset(ind);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline const T& hoNDArray<T>::operator()(const std::vector<size_t>& ind) const {
        size_t idx = this->calculate_offset(ind);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline T& hoNDArray<T>::operator()(size_t x) {
        GADGET_DEBUG_CHECK_THROW(x < this->get_number_of_elements());
        return this->data_[x];
    }

    template <typename T> inline const T& hoNDArray<T>::operator()(size_t x) const {
        GADGET_DEBUG_CHECK_THROW(x < this->get_number_of_elements());
        return this->data_[x];
    }

    template <typename T> inline T& hoNDArray<T>::operator()(size_t x, size_t y) {
        size_t idx = this->calculate_offset(x, y);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline const T& hoNDArray<T>::operator()(size_t x, size_t y) const {
        size_t idx = this->calculate_offset(x, y);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z) {
        size_t idx = this->calculate_offset(x, y, z);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline const T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z) const {
        size_t idx = this->calculate_offset(x, y, z);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s) {
        size_t idx = this->calculate_offset(x, y, z, s);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline const T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s) const {
        size_t idx = this->calculate_offset(x, y, z, s);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T> inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p) {
        size_t idx = this->calculate_offset(x, y, z, s, p);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline const T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p) const {
        size_t idx = this->calculate_offset(x, y, z, s, p);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p, size_t r) {
        size_t idx = this->calculate_offset(x, y, z, s, p, r);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline const T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p, size_t r) const {
        size_t idx = this->calculate_offset(x, y, z, s, p, r);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a) {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline const T& hoNDArray<T>::operator()(
        size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a) const {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline T& hoNDArray<T>::operator()(size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a, size_t q) {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a, q);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline const T& hoNDArray<T>::operator()(
        size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a, size_t q) const {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a, q);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline T& hoNDArray<T>::operator()(
        size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a, size_t q, size_t u) {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a, q, u);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    template <typename T>
    inline const T& hoNDArray<T>::operator()(
        size_t x, size_t y, size_t z, size_t s, size_t p, size_t r, size_t a, size_t q, size_t u) const {
        size_t idx = this->calculate_offset(x, y, z, s, p, r, a, q, u);
        GADGET_DEBUG_CHECK_THROW(idx < this->get_number_of_elements());
        return this->data_[idx];
    }

    namespace {
        struct hondarray_detail {

            template <size_t count, class... ARGS> struct count_slices { static constexpr size_t value = count; };

            template <size_t count, class... ARGS>
            struct count_slices<count, Indexing::Slice, ARGS...> : count_slices<count + 1, ARGS...> {};


            template <size_t count, class T, class... ARGS>
            struct count_slices<count, T, ARGS...> : count_slices<count, ARGS...> {};

            template <class... ARGS> static auto extract_indices(const Indexing::Slice&, const ARGS&... args) {
                return extract_indices(args...);
            }

            template <class... ARGS> static auto extract_indices(size_t index0, const ARGS&... args) {
                return std::array<size_t, sizeof...(ARGS) + 1>{ index0, static_cast<size_t>(args)... };
            }

            template <class T, class... INDICES>
            static auto calculate_strides(const hoNDArray<T>& base, const INDICES&... indices) {
                constexpr size_t ndims = count_slices<0, INDICES...>::value;
                auto strides           = std::array<size_t, ndims>{};
                std::fill_n(strides.begin(),strides.size(),1);
                calculate_strides_internal<ndims, 0, 0>(strides, base, indices...);
                return strides;
            }

            template <class T, class... INDICES>
            static auto calculate_dimensions(const hoNDArray<T>& base, const INDICES&... indices) {
                constexpr size_t ndims = count_slices<0, INDICES...>::value;
                auto dims              = std::array<size_t, ndims>{};
                calculate_dims_internal<ndims, 0, 0>(dims, base, indices...);
                return dims;
            }

            static size_t slice_start_index(size_t x) {
                return x;
            }

            static size_t slice_start_index(const Indexing::Slice&) {
                return 0;
            }

             template <unsigned int DIMS, unsigned int CUR_DIM, class T, class OTHER> struct looper {
                static void assign_loop(const vector_td<size_t, DIMS>& dims, vector_td<size_t, DIMS>& idx,
                    hoNDArrayView<T, DIMS>& self, const OTHER& other) {
                    for (idx[CUR_DIM] = 0; idx[CUR_DIM] < dims[CUR_DIM]; idx[CUR_DIM]++){
                        looper<DIMS,CUR_DIM-1,T,OTHER>::assign_loop(dims,idx,self,other);
                    }
                }
            };

            template <unsigned int DIMS, class T, class OTHER> struct looper<DIMS, 0, T, OTHER> {
                static void assign_loop(const vector_td<size_t, DIMS>& dims, vector_td<size_t, DIMS>& idx,
                    hoNDArrayView<T, DIMS>& self, const OTHER& other) {
                    for (idx[0] = 0; idx[0] < dims[0]; idx[0]++){
                        Core::apply([&](auto&&... indices) { self(indices...) = other(indices...); },idx);
                    }
                }
            };

        private:
            template <unsigned int DIMS, unsigned int CUR_VIEW_DIM, unsigned int CUR_ARRAY_DIM, class T,
                class... INDICES>
            static void calculate_dims_internal(
                std::array<size_t, DIMS>& dims, const hoNDArray<T>& base, const size_t&, const INDICES&... indices) {
                calculate_dims_internal< DIMS, CUR_VIEW_DIM, CUR_ARRAY_DIM + 1>(dims, base, indices...);
            }
            template <unsigned int DIMS, unsigned int CUR_VIEW_DIM, unsigned int CUR_ARRAY_DIM, class T,
                class... INDICES>
            static void calculate_dims_internal(
                std::array<size_t, DIMS>& dims, const hoNDArray<T>& base, const Indexing::Slice&, const INDICES&... indices) {
                dims[CUR_VIEW_DIM] = base.get_size(CUR_ARRAY_DIM);
                if (CUR_VIEW_DIM + 1 < DIMS)
                    calculate_dims_internal<DIMS, CUR_VIEW_DIM + 1, CUR_ARRAY_DIM + 1>(dims, base, indices...);
            }

            template<unsigned int DIMS, unsigned int CUR_STRIDE_DIM, unsigned int CUR_ARRAY_DIM, class T>
            static void calculate_dims_internal(std::array<size_t,DIMS>& strides,const hoNDArray<T>& base ){}

            template <unsigned int DIMS, unsigned int CUR_STRIDE_DIM, unsigned int CUR_ARRAY_DIM, class T,
                class... INDICES>
            static void calculate_strides_internal(std::array<size_t, DIMS>& strides, const hoNDArray<T>& base,
                const size_t& x, const INDICES&... indices) {
                strides[CUR_STRIDE_DIM] *= base.get_size(CUR_ARRAY_DIM);
                hondarray_detail::calculate_strides_internal<DIMS, CUR_STRIDE_DIM, CUR_ARRAY_DIM + 1>(strides,base, indices...);
            }

            template <unsigned int DIMS, unsigned int CUR_STRIDE_DIM, unsigned int CUR_ARRAY_DIM, class T,
                class... INDICES>
            static void calculate_strides_internal(
                std::array<size_t, DIMS>& strides, const hoNDArray<T>& base, const Indexing::Slice&, const INDICES&... indices) {
                if (CUR_STRIDE_DIM + 1 < DIMS) {
                    strides[CUR_STRIDE_DIM + 1] = strides[CUR_STRIDE_DIM]*base.get_size(CUR_ARRAY_DIM);
                    hondarray_detail::calculate_strides_internal<DIMS, CUR_STRIDE_DIM + 1, CUR_ARRAY_DIM + 1>(strides, base, indices...);
                }
            }
            template<unsigned int DIMS, unsigned int CUR_STRIDE_DIM, unsigned int CUR_ARRAY_DIM, class T>
                static void calculate_strides_internal(std::array<size_t,DIMS>& strides,const hoNDArray<T>& base ){}


        };
    }

    template <class T>
    template <class... INDICES>
    std::enable_if_t<ValidIndex<Indexing::Slice, INDICES...>::value, hoNDArray<T>> hoNDArray<T>::operator()(
        const Indexing::Slice&, const INDICES&... indices) {
        constexpr size_t nsubdims = hondarray_detail::count_slices<0, INDICES...>::value + 1;
        constexpr size_t N = sizeof...(INDICES) - nsubdims+1;
        auto index_array          = hondarray_detail::extract_indices(indices...);
        auto subdimensions        = std::vector<size_t>(nsubdims);
        std::copy_n(this->dimensions_.begin(), nsubdims, subdimensions.begin());


        auto n_offset = 1;
        for(const auto & s : subdimensions ) n_offset *= s;

        T* sub_data = this->data();
        size_t offset = 0;
        for (size_t i = 0; i < N; i++) {
            sub_data += index_array[i] * n_offset;
            offset += index_array[i]*n_offset;
            n_offset *= this->dimensions_[i + nsubdims];

        }

        return hoNDArray<T>(subdimensions, sub_data);
    }

    template<class T>
    template<class... INDICES, class UNUSED >
    auto hoNDArray<T>::operator()(const INDICES&... indices){

        auto strides = hondarray_detail::calculate_strides(*this, indices...);
        auto dims    = hondarray_detail::calculate_dimensions(*this, indices...);

            T* offset = &Core::apply([this](auto&&... indices) -> T& { return this->operator()(indices...); },
            std::make_tuple(hondarray_detail::slice_start_index(indices)...));

        return hoNDArrayView<T, dims.size()>{ strides, dims, offset};
    }

    template <class T, size_t D> hoNDArrayView<T,D>& hoNDArrayView<T, D>::operator=(const hoNDArrayView& other) {
        auto idx = vector_td<size_t,D>{};
        hondarray_detail::looper<D,D-1,T,hoNDArrayView<T,D>>::assign_loop(dimensions,idx,*this,other);
        return *this;

    }

    template <class T, size_t D> hoNDArrayView<T,D>& hoNDArrayView<T, D>::operator=(const hoNDArray<T>& other) {
        auto idx = vector_td<size_t,D>{};
        hondarray_detail::looper<D,D-1,T,hoNDArray<T>>::assign_loop(dimensions,idx,*this,other);
        return *this;
    }

    template <class T, size_t D>
    template <class... INDICES>
    std::enable_if_t<Core::all_of_v<Core::is_convertible_v<INDICES,size_t>...> && (sizeof...(INDICES) == D),T&>
        hoNDArrayView<T,D>::operator()(INDICES... indices){
            auto index_vector = make_vector_td<size_t>(indices...);
            size_t offset = sum(index_vector*this->strides);
            return data[offset];
    }

    template <class T, size_t D>
    template <class... INDICES>
    std::enable_if_t<Core::all_of_v<Core::is_convertible_v<INDICES,size_t>...> && (sizeof...(INDICES) == D),const T&>
    hoNDArrayView<T,D>::operator()(INDICES... indices) const {
        auto index_vector = make_vector_td<size_t>(indices...);
        size_t offset = sum(index_vector*this->strides);
        return data[offset];
    }

    template <class T, size_t D>
    hoNDArrayView<T, D>::hoNDArrayView(const std::array<size_t, D>& strides, const std::array<size_t, D>& dimensions, T* data) : strides{strides}, dimensions{dimensions}, data{data} {}

}
