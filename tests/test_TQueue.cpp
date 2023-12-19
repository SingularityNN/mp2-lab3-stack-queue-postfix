#include <gtest.h>
#include "TQueue.h"
//Constructors
TEST(TQueue, DefaultConstructorTest) {
	ASSERT_NO_THROW(TQueue<int> q);
}

TEST(TQueue, InitializeConstructorTest) {
	ASSERT_NO_THROW(TQueue<int> q(3));
}

TEST(TQueue, Throws_InitializeConstructorTest_ZeroSize) {
	ASSERT_ANY_THROW(TQueue<int> q(0));
}

//IsFull()
TEST(TQueue, IsFullTest_Empty) {
	TQueue<int> q(2);
	EXPECT_FALSE(q.IsFull());
}

TEST(TQueue, IsFullTest_NotEmpty) {
	TQueue<int> q(2);
	q.Push(1);
	EXPECT_FALSE(q.IsFull());
}

TEST(TQueue, IsFullTest_Full) {
	TQueue<int> q(2);
	q.Push(1);
	q.Push(2);
	EXPECT_TRUE(q.IsFull());
}

//IsEmpty()
TEST(TQueue, IsEmptyTest_Empty) {
	TQueue<int> q(3);
	EXPECT_TRUE(q.IsEmpty());
}

TEST(TQueue, IsEmptyTest_NotEmpty) {
	TQueue<int> q(3);
	q.Push(1);
	EXPECT_FALSE(q.IsEmpty());
}

TEST(TQueue, IsEmptyTest_Full) {
	TQueue<int> q(2);
	q.Push(1);
	q.Push(2);
	EXPECT_FALSE(q.IsEmpty());
}

//Push()
TEST(TQueue, PushTest_QueueIsEmpty) {
	TQueue<int> q(2);
	ASSERT_NO_THROW(q.Push(1));
}

TEST(TQueue, PushTest_QueueIsNotEmpty) {
	TQueue<int> q(2);
	q.Push(1);
	ASSERT_NO_THROW(q.Push(2));
}

TEST(TQueue, Throws_PushTest_QueueIsFull) {
	TQueue<int> q(2);
	q.Push(1);
	q.Push(2);
	ASSERT_ANY_THROW(q.Push(3));
}

//Get()
TEST(TQueue, Throws_GetTest_QueueIsEmpty) {
	TQueue<int> q(3);
	ASSERT_ANY_THROW(q.Get());
}

TEST(TQueue, GetTest_QueueIsNotEmpty) {
	TQueue<int> q(3);
	q.Push(1);
	q.Push(2);
	ASSERT_NO_THROW(q.Get());
}

TEST(TQueue, GetTest_QueueIsFull) {
	TQueue<int> q(3);
	q.Push(1);
	q.Push(2);
	q.Push(3);
	ASSERT_NO_THROW(q.Get());
}